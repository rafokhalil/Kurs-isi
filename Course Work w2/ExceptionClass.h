#include <iostream>
#include<fstream>
using namespace std;
class Exception {
protected:
	string text;
	string source;
	int line;
	string time;
	string date;
public:
Exception(string text,string source,int line,string date,string time) :text(text), source(source), line(line),date(date),time(time) {}
const string& getMessage()const {
	return text;
}
void printMessage()const {
	cout << "Error Info : " << endl;
	cout << "Error text : " << getMessage() << endl;
	cout << "Error source : " << source << endl;
	cout << "Code line : " << line << endl;
	cout << "Error date : " << date << endl;
	cout << "Error time : " << time << endl;
}
};

class OutOfRangeException : public Exception {
public:
	OutOfRangeException(string text,string source,int line,string date,string time) :Exception(text,source,line,date,time) {}
};

class InvalidArgumentException :public Exception {
public:
	InvalidArgumentException(string text,string source,int line,string date,string time) :Exception(text,source,line,date,time) {}
};

class HackAttempException:public Exception{
public:
	HackAttempException(string text,string source,int line,string date,string time):Exception(text,source,line,date,time){}
};

void writeErrorToFile(string errorCode,string source,int line,string date,string time) {
	string filename = "ErrorLog.txt";
	ofstream fout(filename,ios::app);
 if (fout.is_open()) {
	 fout << "Error Code :" << errorCode << " " << "\n";
	 fout << "Error Source :" << source << " " << "\n";
	 fout << "Error Line : " << line << " " << "\n";
	 fout << "Error Date : " << date << " " << "\n";
	 fout << "Error Time : " << time << " " << "\n";
 }
 fout.close();
}

void writeToCriticalNotificationLog(string notification, string date, string time) {
	string filename = "CriticalNotificationLog.txt";
	ofstream fout(filename, ios::app);
	if (fout.is_open()) {
		fout << "Notification : " << notification << " " << "\n";
		fout << "Date : " << date << " " << "\n";
		fout << "Time : " << time << " " << "\n";
	}
	fout.close();
}

void writeToProgramLog(string notification, string date, string time) {
	string filename = "ProgramLog.txt";
	ofstream fout(filename, ios::app);
	if (fout.is_open()) {
		fout << "Notification : " << notification << " " << "\n";
		fout << "Date : " << date << " " << "\n";
		fout << "Time : " << time << " " << "\n";
	}
	fout.close();
}

