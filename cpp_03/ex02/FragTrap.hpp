#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string const &name);
		~FragTrap();
		bool	vaulthunterDotExe(std::string const & target);
};

#endif
