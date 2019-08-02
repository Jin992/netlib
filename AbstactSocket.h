//
// Created by jin on 7/31/19.
//

#ifndef NETWORK_ABSTACTSOCKET_H
#define NETWORK_ABSTACTSOCKET_H


#include <cstdint>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>

namespace netlib {
    namespace abstract {
        class AbstactSocket {
        protected:
            AbstactSocket(uint16_t port);
            int32_t                 &get_socket();
            struct sockaddr_storage &get_remote();
            struct addrinfo         &get_hints();
            struct addrinfo         *get_servinfo();
            struct addrinfo         *p();
            socklen_t               &addr_len();
            char                    *ip_str();
            uint16_t                &get_port();


        private:
            int32_t                 _sock_fd;
            struct sockaddr_storage _remote_addr;
            struct addrinfo         _hints;
            struct addrinfo         *_servinfo;
            struct addrinfo         *_p;
            socklen_t               _addr_len;
            char                    _s[INET6_ADDRSTRLEN];
            uint16_t                _port;

        };
    }
}

#endif //NETWORK_ABSTACTSOCKET_H
