#ifndef LWHTTP_SERVER_HPP
#define LWHTTP_SERVER_HPP

#include <string>
#include <openssl/bio.h>


namespace lwHTTP{

	class lwHTTPServer{
		
	public:
		void setName(std::string name);
		void setPort(int port);
		void useTLS(bool useTLSQ, X509* certificate);
		
	};

}

#endif //LWHTTP_SERVER_HPP
