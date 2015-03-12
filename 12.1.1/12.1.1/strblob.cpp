#include "strblob.h"
#include <vector>
#include <string>
#include <memory>


StrBlob::StrBlob():data(make_shared<>()){}

StrBlob::StrBlob(std::vector<std::string> i1):data(make_shared<std::vector<std::string>>(i1)){}

void StrBlob::check(size_type i, const std::string &msg) const
{
	if(i >= data->size()) throw out_of_range(msg);
}

std::string &  StrBlob::front(){
	check(0,"pop back on empty strblob");
	return data->front();
}

std::string & StrBlob::back(){
	check(0,"pop back on empty strblob");
	return data->back();
}

void StrBlob::pop_back()
{
	check(0,"pop back on empty strblob");
	data->pop_back();
}


