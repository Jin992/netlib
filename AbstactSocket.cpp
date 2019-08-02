//
// Created by jin on 7/31/19.
//

#include "AbstactSocket.h"
/*
int32_t                 _sock_fd;
struct sockaddr_storage _remote_addr;
struct addrinfo         _hints;
struct addrinfo         *_servinfo;
struct addrinfo         *_p;
socklen_t               _addr_len;
char                    _s[INET6_ADDRSTRLEN];
uint16_t                _port;
*/
namespace netlib {
    AbstactSocket::AbstactSocket(uint16_t port)
    : _sock_fd(-1), _remote_addr{0}, _hints{0}, _servinfo(nullptr), _p(nullptr), _addr_len(0), _s{0}, _port(5555)
    {}

    int32_t& AbstactSocket::get_socket() {
        return _sock_fd;
    }

    struct sockaddr_storage& AbstactSocket::get_remote() {
        return _remote_addr;
    }

    socklen_t& AbstactSocket::addr_len() {
        return _addr_len;
    }

    struct addrinfo& AbstactSocket::get_hints() {
        return _hints;
    }

    struct addrinfo* AbstactSocket::p() {
        return _p;
    }

    struct addrinfo* AbstactSocket::get_servinfo() {
        return _servinfo;
    }

    char* AbstactSocket::ip_str() {
        return _s;
    }

    uint16_t& AbstactSocket::get_port() {
        return _port;
    }
}