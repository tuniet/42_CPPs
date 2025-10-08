#pragma once

#include <string>

class Contact {
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	secret;
	std::string	number;
public:
	const std::string&	get_firstname(void) const;
	const std::string&	get_lastname(void) const;
	const std::string&	get_nickname(void) const;
	const std::string&	get_secret(void) const;
	const std::string&	get_number(void) const;
	void				set_firstname(const std::string& firstname);
	void				set_lastname(const std::string& lastname);
	void				set_nickname(const std::string& nickname);
	void				set_secret(const std::string& secret);
	void				set_number(const std::string& number);
};
