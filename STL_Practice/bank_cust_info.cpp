#include "common_includes.h"

int bank_customers_info::add_bank_account(std::string bankacntName, std::string bankacntNumber)
{
	std::shared_ptr<bank_customers_info> bankObject(new bank_customers_info(bankacntName, bankacntNumber));
	if (bankObject != nullptr) {
		LOGGER->Log("add_bank_account object got created succesfully");
		bankAccountsInfo.push_back(bankObject);
		return 0;
	}
	else {
		LOGGER->Log("add_bank_account object creation got failed");
		return -1;
	}
}
