//
// Created by jin on 8/2/19.
//

#ifndef NETWORK_UDPSOCKET_H
#define NETWORK_UDPSOCKET_H

#include "AbstactSocket.h"

namespace netlib {
    namespace udp {
        class UdpSocket: public netlib::abstract::AbstactSocket {
        public:
            UdpSocket(uint16_t port);

        private:
            void _init_socket();

        private:


        };
    }
}

#endif //NETWORK_UDPSOCKET_H
