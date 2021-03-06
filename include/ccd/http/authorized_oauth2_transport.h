
#pragma once

// (c) 2019 Iurii Pelykh
// This code is licensed under MIT license

#include <ccd/http/http_transport.h>

namespace ccd::http
{

class authorized_oauth2_transport
{
public:
    authorized_oauth2_transport(std::string access_token, transport_func transport);
    response_future operator()(request r);

private:
    std::string m_access_token;
    transport_func m_transport;
};

class authorized_oauth2_transport_factory
{
public:
    authorized_oauth2_transport_factory(std::string access_token, transport_factory factory);
    transport_func operator()();

private:
    std::string m_access_token;
    transport_factory m_factory;
};

}
