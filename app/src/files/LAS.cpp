//
// Created by tristan on 11/5/15.
//

#include "files/LAS.h"

LAS::LAS() {

}

LAS::LAS( std::string file_path ) {

    // Set the file path
    this->file_path = file_path;

    // Read the header
    initialize();

}

/**
 * Responsible for opening the file and determining the LAS version
 * if the file is a valid LAS file.
 */
void LAS::initialize() {

    // Open the file
    file_stream.open( file_path.data(), std::ios::binary | std::ios::in );

    // Check that the file opened correctly
    if ( file_stream.is_open() ) {

        // First we'll check that this is actually an LAS file
        char file_signature[4];

        // Read the first 4 bytes to check for LASF
        file_stream.seekg( 0, std::ios::beg );
        file_stream.read( file_signature, sizeof(file_signature) );
        std::string signature ( file_signature, file_signature + sizeof(file_signature) / sizeof(file_signature[0]) );

        // Check for LASF
        if ( signature == "LASF" ) {

            // Coming soon

        } else {

            throw LAS_error( "Not a valid LAS file. File signature is: " + signature );

        }

    } else {

        throw LAS_error( "Unable to open " + file_path );

    }

}

void LAS::readHeader() {

}
