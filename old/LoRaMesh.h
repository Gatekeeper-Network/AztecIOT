
#pragma once

#ifndef LoRaMesh_H
#define LoRaMesh_H


#include <Arduino.h>
#include <RHRouter.h>
#include <RHMesh.h>
#include <RH_RF95.h>

#define RH_HAVE_SERIAL
// #define N_NODES = 4
//in case we cant use eeprom
#define nodeID = 1


class LoRaMesh{

    
    public: 
        void getRouteInfoString(char *p, size_t len);
    private: 
        // uint8_t nodeID; 
        const int N_NODES = 4;
        static uint8_t routes[4]; 
        static int16_t rssi[4];
        
}; 

#endif
