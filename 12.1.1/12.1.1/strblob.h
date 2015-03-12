#include <string>
#include <vector>
#include <memory>


class StrBlob{
public:
	typedef std::vector<std::string>::size_type size_type;
	StrBlob();
	StrBlob(std::vector<std::string> i1);
	size_type size() const {return data->size();}
	bool empty() const {return data->empty();}

	//add or remove elements
	void push_back(const std::string &t){data->push_back(t);};
	void pop_back();

	//ÔªËØ·ÃÎÊ
	std::string & front();
	std::string & back();
	
private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_type i, const std::string &msg) const;
};