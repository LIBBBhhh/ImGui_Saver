// File: SaverDemo.cpp
// Created on: Fri Sep 29 21:39:16 +04 2023
// User: root

//Version V1.0!


#include "Saver.h"



using namespace Saver;




//int bool and etc
bool Show_demo = false;
bool Aus = false;



void DemoSaver(){
	const ImVec2 window_size = ImVec2(900, 992);
    const char* window_title = "Saver Demo!";
    const char* name = "Hello World";
	const char* version = "1.0";
	
    // Begin the main menu window
    ImGui::SetNextWindowSize(window_size);
    if (ImGui::Begin(window_title, nullptr))
    {
        
		ImGui::TextColored(ImVec4(1, 1, 1, 1), "Ver: 1.0");
		ImGui::Text("ImGui Ver: %s", ImGui::GetVersion());

		ImGui::TextColored(ImVec4(1, 1, 1, 1), "We will Love Creator!");
		ImGui::Text("FPS : %.3f ms (%.1f)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
    
        // Add a horizontal line for separation
        ImVec2 cursor_pos = ImGui::GetCursorScreenPos();
        ImGui::GetWindowDrawList()->AddLine(cursor_pos,
        ImVec2(cursor_pos.x + ImGui::GetContentRegionAvail().x, cursor_pos.y),
        ImGui::GetColorU32(ImGuiCol_Text));
        ImGui::Spacing();

        // Add some checkboxes and features
		if (ImGui::CollapsingHeader("Freatures")){
        if (ImGui::Button("Save Settings")){
			Create();
			Save();
   }
   if (ImGui::Button("Revert")){
	   Delete();
   }
   ImGui::Checkbox("Auto_Save", &Aus);
    }
	if (ImGui::CollapsingHeader("Others")){
		 ImGui::Checkbox("Show Demo Window", &Show_demo);
	}
		if (ImGui::CollapsingHeader("About")){
			ImGui::Text("Saver is a utility that saves imgui settings");
			ImGui::Text("It saves the position and other settings");
			ImGui::Text("Yes, it's still the same expensive imgui");
			ImGui::Text("It will just cut down on time");
			ImGui::Text("You don't have to mess around with files");
			ImGui::Separator();
		
			ImGui::Text("you can use this in your menu");
			ImGui::Text("use void");
			ImGui::Separator();
			ImGui::Text("Example:");
			ImGui::Text("Saver::Create();");
			ImGui::Text("Saver::Save();");
			ImGui::Separator();
			ImGui::Text("Auto Save:");
			ImGui::Text("Saver::SavePosMenu();");
			
			}
		if (ImGui::CollapsingHeader("Important Information ")){
			ImGui::Text("The source is on github ");
			ImGui::Text("Not for use by cheats, etc.");
			ImGui::Text("The utility will simplify the task with files");
			ImGui::Text("But it won’t remove it completely!");
			
			}
	if (ImGui::CollapsingHeader("Documentation about the version")){
		ImGui::Text("Auto save only works on Checkbox");
		ImGui::Text("The rest works as it should");
		ImGui::Text("What about modules and applications");
		ImGui::Text("I'll do support soon");
		}
		if (ImGui::Button("Quit!", ImVec2(100, 70))) {
    
  
    exit(0);
}
			
		
        ImGui::End();
    }
	
	if (Show_demo){
		ImGui::ShowDemoWindow();
	}
	if (Aus){
		AutoSave();
	}
	
	
}
	
	
