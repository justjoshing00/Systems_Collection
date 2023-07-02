#include "SDL.h"
#include "glm/vec3.hpp"
#include "glm/vec2.hpp"
#include <vector>
#include <SDL_image.h>
#include <SDL_ttf.h>

//UIdata needs to used for two things: 'Collision Detectction' to determine if you clicked on the button, and Rendering
//actually i think the UI data needs to be constructed from 4 other sets of data:
//UIRenderData, UICollisionData, UIFontData, and UITextureData

SDL_Window* window = SDL_CreateWindow("hello ui", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 800, NULL);
SDL_Renderer* renderer = SDL_CreateRenderer(window,-1,0);
// Remember to open the font at program start!
	std::vector<SDL_Surface*> UITexSurfaceData;//input to textureprep
	std::vector<SDL_Surface*> UIFontSurfaceData;//input to fontprep
	std::vector<SDL_Texture*> UITextureData; //output textureprep to here
	std::vector<SDL_Texture*> UIFontData; //output  fontprepto here
	//call textureprep when i call the constructor of UItexture data
	//call fontprep when I call the contructor of UIfontdata

std::vector<SDL_Texture*> textureprep(std::vector<SDL_Surface*> UITexSurfaceData_)
{
	//surface pointers
	//load pics into surfaces with imgload
	//create textures from surfaces
	//free surfaces
	//return textures
	UITexSurfaceData_[0] = IMG_Load("");
	UITextureData[0] = SDL_CreateTextureFromSurface(renderer, UITexSurfaceData_[0]);
	SDL_FreeSurface(UITexSurfaceData_[0]);
	return UITextureData;

	

}
std::vector<SDL_Texture*> fontPrep(std::vector<SDL_Surface*> UIFontSurfaceData_)
{
	//surface pointers
	//load fonts into surfaces. When the font is loaded into the surface, thats when you choose what the text actually says. Cant change it once its a texture.
	//create textures from surfaces
	//free surfaces	
	//return textures
	UIFontSurfaceData_[0] = IMG_Load("");
	UIFontData[0] = SDL_CreateTextureFromSurface(renderer, UIFontSurfaceData_[0]);// this line is different
	SDL_FreeSurface(UIFontSurfaceData_[0]);
	return UIFontData;

}


struct UIRenderData
{
	float posx;
	float posy;
	float basesizex;
	float basesaizey;
	float scale;
	int depth;
	float rotation;
};

struct UICollisionData
{
	float detectionsizex;
	float detectionsizey;
	float isselected;
};
struct UIData
{
	UIRenderData ren;
	 //does not change, only should be called once
	UICollisionData cd;
	 //does not change, only shoild be called once

	UIData()
	{

	}
};


void rendercall(SDL_Renderer* renderer_, UIData uidata_)
{
	// Because the renderer only takes one thing, I need to pass any grouped data into the
	// render function and 'assemble' it before i pass it to the SDL renderer

		//loop starts here
	SDL_Rect src{};
	SDL_Rect dest{};
	//texture


	//SDL_RenderCopyEx(renderer_,);

		//SDL render 
		//renderer
		//texture
		//srect
		//destrect
		//angle
		//center
		//flip
}







int main(int argc, char* argv[])
{


	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* window = SDL_CreateWindow("hello ui", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
	SDL_UpdateWindowSurface(window);

	bool isrunning = true;

	while (isrunning == true)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event));
		{

		}
	}
	return 0;
}