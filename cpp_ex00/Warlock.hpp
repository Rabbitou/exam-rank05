#include <iostream>

class Warlock {
	private:
		std::string	_name;
		std::string	_title;
		Warlock(Warlock const &);
		Warlock();
		Warlock & operator=(Warlock const &);
	public:
		std::string const &getName() const;
		std::string const &getTitle() const;
		void	setTitle(std::string const &);
		Warlock(std::string name, std::string title);
		~Warlock();
		void	introduce() const;
};