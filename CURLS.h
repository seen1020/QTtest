#if !defined(_CURLS_H)
#define _CURLS_H
#include <string>
#include <strstream>
using namespace std;

class CURLS {
public:
	int pageType;
	enum{
		TYPE_HTML,
		TYPE_CSS,
		TYPE_JS,
		TYPR_IMG
	};
	CURLS(const string & url);
	CURLS(const char * url);
	int GetPort()const;
	const string & GetHost()const;
	const string & GetURL()const;
	const string & GetPath()const;
	bool operator<(const CURLS &url)const;
protected:
	string m_URL;
	string m_host;
	string m_path;
	int m_port;
	void SplitURL();
};

#endif  //_CURL_H
