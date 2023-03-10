#pragma once

#include <vector>

#include "DataStructure/StringsHolder.hpp"
#include "DataStructure/DataBase.hpp"

namespace Parsing
{
	class FileParser
	{
	public:
		FileParser() = default;

		~FileParser() = default;

		bool ReadMainFile(DataStructure::DataBase& dataBase);

		bool WriteMainFile(const DataStructure::DataBase& dataBase);

		bool ReadStrings(DataStructure::StringsHolder& strings);

		bool WriteStrings(const DataStructure::StringsHolder& strings);

	private:

	};

}