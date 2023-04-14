#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	std::vector<std::vector<std::string> > content;
	std::vector<std::string> row;
	std::string line, word;

	std::vector<std::vector<std::string> > db_content;
	std::vector<std::string> db_row;
	std::string db_line, db_word;
 
	std::fstream file (argv[1], std::ios::in);
	if(file.is_open())
	{
		while(getline(file, line))
		{
			row.clear();
 
			std::stringstream str(line);
 
			while(getline(str, word, ','))
				row.push_back(word);
			content.push_back(row);
		}
	}
	else
		std::cout<<"Could not open the file\n";

	std::fstream file ("data.csv", std::ios::in);
	if(file.is_open())
	{
		while(getline(file, line))
		{
			row.clear();
 
			std::stringstream str(line);
 
			while(getline(str, word, ','))
				row.push_back(word);
			content.push_back(row);
		}
	}
	else
		std::cout<<"Could not open the database\n";

	
	for(int i=0 ;i<(int)content.size() ;i++)
	{
		for(int j=0;j<(int)content[i].size();j++)
		{
			std::cout<<content[i][j]<<" ";
		}
		std::cout<<"\n";
	}
 
	return 0;
}