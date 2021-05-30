#pragma once
#include "common_includes.h"

class bank_customers_info
{
public:
	// only static info is exposed as public , remaining everything would be private
	static int add_bank_account(std::string bankacntName, std::string bankacntNumber);
	// vector will hold all bank account info objects
	static std::vector<std::shared_ptr<bank_customers_info>> bankAccountsInfo;
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