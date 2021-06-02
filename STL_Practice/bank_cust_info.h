#pragma once
#include <vector>

class bank_application_information;

class bank_customers_info
{
public:
	// only static info is exposed as public , remaining everything would be private
	static int add_bank_account(std::string bankacntName, std::string bankacntNumber);
	// run time back up will hold all bank account info objects as per client needs
    static bank_application_information runtime_backup_object;
	
private:
	bank_customers_info() = delete;
	// parameter constructor as private
	bank_customers_info(std::string bankacntNamee, std::string bankacntNumberr) {
		bank_account_holder_name = bankacntNamee;
		bank_account_number = bankacntNumberr;
	}
    // copy and assignments constructors are private
	bank_customers_info(bank_customers_info& obj) = default;
	bank_customers_info& operator= (const bank_customers_info& obj) = default;
	bank_customers_info(bank_customers_info&&) = default;

	// DataMemebers as private
	std::string bank_account_holder_name;
	std::string bank_account_number;
};

class runtime_bank_information
{
public:
	virtual void push_bank_custom_info(std::shared_ptr< bank_customers_info > ptr) = 0;
};

class vector_backup : public runtime_bank_information
{
public:
	void push_bank_custom_info(std::shared_ptr< bank_customers_info > ptr);
private:
	std::vector<std::shared_ptr<bank_customers_info>> bankAccountsInfo;
};


class bank_application_information {
public:
	bank_application_information()
	{
		backup_object = nullptr;
	}

	void save_bank_cust_info(std::shared_ptr<bank_customers_info> ptr)
	{
		if (backup_object == nullptr)
			backup_object = std::unique_ptr<runtime_bank_information>(new vector_backup());
	
		backup_object.get()->push_bank_custom_info(ptr);
	}
private:
	std::unique_ptr<runtime_bank_information> backup_object;
};