/***************************************************************************//**
 * Class server
 *
 * Start socket server and save file from client
 *
 * Auther: mahdigh
 *
 * Cntact: mahdigh113@gmail.com
 *
 * Created on: june 11 2020
 *
 ******************************************************************************/

#ifndef Server_H
#define Server_H

#include <iostream>
#include <string>
#include <sys/socket.h>
#include "Compressor.h"
#include "Encryptor.h"

class server
{
public:

    const int port;  /**< server is listening on this port */

    Server();

    
    /// Receive file from client
    void receive_file();

    /// Save received file on server
    void save_file();

private:

    /**
    * Create socket
    *
    * @param {int} port - server is listening on this port
    *
    * @return Server status
    */
    bool start_accept(int port);

    
    /// Handle threads and make new thread for new client
    bool handle_accept();
};
