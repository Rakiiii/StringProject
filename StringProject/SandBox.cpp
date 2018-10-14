#include "pch.h"
/*
	template<typename T>
	T String::convertToNumber()
	{
		if (T == int)
		{
			T number = NULL;
			for (int i = 0; i < this->length; i++)
			{
				if ((this->_string[i] >= '0') && (this->_string[i] <= '9'))
				{
					number = number * 10 + this->_string[i] - 0x30;
				}
				else return NULL;
			}
			return number;
		}
		else
		{
			if ( (T == double) || (T == float) )
			{
				T number = NULL;
				bool flag = false;
				int counter = 0;
				for (int i = 0; i < this->length; i++)
				{
					if (
							(this->_string[i] == '.') ||
							(this->_string[i] == ',') ||
							( (this->_string[i] >= '0') && (this->_string[i] <= '9') )
					   )
					{
						if ((this->_string[i] == '.') || (this->_string[i] == ','))
						{
							if (!flag)
							{
								i++;
								flag = true;
							}
							else return NULL;
						}
						if ((this->_string[i] >= '0') && (this->_string[i] <= '9'))
						{
							if (flag) counter++;
							number = number * 10 + this->_string[i] - 0x30;
						}
					}
					else return NULL;
				}
				if (counter > 0)number = (number / pow(10, counter));
				return number;
			}
			else return NULL;
		}
	}

		if ((T ==  "double") || (T == "float"))
		{
			T number = NULL;
			bool flag = false;
			int counter = 0;
			for (int i = 0; i < this->length; i++)
			{
				if (
					((T == "int") || (T == "float") || (T == "double")) &&
					(
					(
						((T == "double") || (T == "float")) &&
						((this->_string[i] == '.') || (this->_string[i] == ','))
						) ||
						((this->_string[i] >= '0') && (this->_string[i] <= '9'))
						)
					)
				{
					if ((this->_string[i] == '.') || (this->_string[i] == ','))
					{
						if (!flag)
						{
							i++;
							flag = true;
						}
						else return NULL;
					}
					if ((this->_string[i] >= '0') && (this->_string[i] <= '9'))
					{
						if (flag) counter++;
						number = number * 10 + this->_string[i] - 0x30;
					}
				}
				else return NULL;
			}
			if (counter > 0) number = (number / pow(10, counter));
			return number;
		}
*/