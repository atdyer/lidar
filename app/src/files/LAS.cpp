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

        // Read the first 4 bytes to check for LASF
        file_stream.seekg( 0, std::ios::beg );
        file_stream.read( file_header.file_signature, sizeof( file_header.file_signature ) );
        std::string signature ( file_header.file_signature,
                                file_header.file_signature + sizeof(file_header.file_signature) / sizeof(file_header.file_signature[0]) );

        // Check for LASF
        if ( signature == "LASF" ) {

            file_stream.read( (char*) &file_header.file_source_id, sizeof( file_header.file_source_id ) );
            file_stream.read( (char*) &file_header.global_encoding, sizeof( file_header.global_encoding ) );
            file_stream.read( (char*) &file_header.project_id_1, sizeof( file_header.project_id_1 ) );
            file_stream.read( (char*) &file_header.project_id_2, sizeof( file_header.project_id_2 ) );
            file_stream.read( (char*) &file_header.project_id_3, sizeof( file_header.project_id_3 ) );
            file_stream.read( file_header.project_id_4, sizeof( file_header.project_id_4 ) );
            file_stream.read( &file_header.version_major, sizeof( file_header.version_major ) );
            file_stream.read( &file_header.version_minor, sizeof( file_header.version_minor ) );

            std::cout << file_header.file_signature << std::endl;
            std::cout << file_header.file_source_id << std::endl;
            std::cout << file_header.global_encoding << std::endl;
            std::cout << file_header.project_id_1 << std::endl;
            std::cout << file_header.project_id_2 << std::endl;
            std::cout << file_header.project_id_3 << std::endl;
            std::cout << file_header.project_id_4 << std::endl;
            std::cout << int(file_header.version_major) << std::endl;
            std::cout << int(file_header.version_minor) << std::endl;

        } else {

            throw LAS_error( "Not a valid LAS file. File signature is: " + signature );

        }

    } else {

        throw LAS_error( "Unable to open " + file_path );

    }

}

void LAS::readHeader() {

}
