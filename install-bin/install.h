#ifndef INSTALL
#define INSTALL 

class Install 
{
	public:
		void   mainfunc();
		string createAction();
		string createMenu();
		string findActionsFolder();
		string createOption(string, string);
		void addOption(string, string, string);
};
#endif