// File: Saver.h
// Created on: Fri Sep 29 21:50:00 +04 2023
// User: root


/*



░██████╗░█████╗░██╗░░░██╗███████╗██████╗░
██╔════╝██╔══██╗██║░░░██║██╔════╝██╔══██╗
╚█████╗░███████║╚██╗░██╔╝█████╗░░██████╔╝
░╚═══██╗██╔══██║░╚████╔╝░██╔══╝░░██╔══██╗
██████╔╝██║░░██║░░╚██╔╝░░███████╗██║░░██║
╚═════╝░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚═╝░░╚═╝

██╗░░░██╗░░███╗░░
██║░░░██║░████║░░
╚██╗░██╔╝██╔██║░░
░╚████╔╝░╚═╝██║░░
░░╚██╔╝░░███████╗
░░░╚═╝░░░╚══════╝


Made by n1kryyy
github LIBHHHHH








HOW TO USE?:
1. You Can modify This on Your settings
2. Save and Create file 
3. if you use module remove cout use LOGE LOGI from Android log or Logger
4. bind it on buton 
____________________________________________
Example:                                   |
if (ImGui::Button("Save"{                  |
Saver::Create();                           |
Saver::Save();                             |
                                           |
}                                          |
____________________________________________
5. in your setup change this:
io.IniFilename = "Imgui.ini";
-----------------------------
6. You Can Use Namespace
_________________________________________
Example:                                |
using namespace Saver;                  |
                                        |
Create();                               |
							            |
						       		    |
-----------------------------------------
			 
			 
*/


#ifndef SAVER_H
#define SAVER_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <dirent.h>
#include <pthread.h>
#include <fstream>
#include <string.h>
#include <time.h>
#include <malloc.h>
#include <iostream>
#include <fstream>
#include<iostream>
#include <imgui.h> //<---Imgui for save





namespace Saver {
	
	void Create() {
    std::string filename = "Imgui.ini";

    // Create an ofstream (output file stream) object for writing to a file
    std::ofstream outputFile(filename);

    // Check if the file was successfully opened for writing
    if (outputFile.is_open()) {
        
        
        outputFile.close();

        std::cout << "File created successfully, and data has been written." << std::endl; //LOGI("File created successfully, and data has been written.");
    } else {
        std::cerr << "Failed to create the file." << std::endl; //LOGE("Failed to create the file.");
    }
}

//Save file 

void Save() {
		ImGui::SaveIniSettingsToDisk("Imgui.ini"); 
		std::cout << "Successfully Saved Settings On Imgui.ini!!!" << std::endl; 
       
	}
	
void Delete(){
	//File:
	const char* filename = "Imgui.ini";
    
    if (std::remove(filename) == 0) {
        std::cout << "File '" << filename << "' has been deleted." << std::endl; //LOGI ("File Del");
    } else {
        std::cerr << "Failed to delete file '" << filename << "'." << std::endl; //LOGE ("Cant Del");
    }
    
}
	//Call in your main or Setup:)
void AutoSave() {
	
          
	
			  
		  
		//Dont use LOGE Cout This!!
		
	std::string filename = "Imgui.ini";

    // Create an ofstream (output file stream) object for writing to a file
    std::ofstream outputFile(filename);

    // Check if the file was successfully opened for writing
    if (outputFile.is_open()) {
        
        
        outputFile.close();

     
    } else {
        
    }
		
		
    ImGui::SaveIniSettingsToDisk("Imgui.ini"); 
		
       
  
}
	
	
	


	
 }//Namespace
 
 

#endif // SAVER_H
