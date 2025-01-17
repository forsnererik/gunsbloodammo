#include <SDL.h>
#include <vector>
#include "SDL_ttf.h"

class Menu{

 public:
  Menu(std::vector<const char*> menuItems, std::vector<const char*> optionItems, const char* fontStyle = "Beastfom.txt");
  ~Menu();

  void update();
  void draw(SDL_Renderer &);

  int keyPressed(char);
  void keyReleased(char);

 private:

  std::vector<const char*> _currentItems, _menuItems, _optionItems;
  TTF_Font* _titleFont;
  TTF_Font* _breadFont;
  TTF_Font* _highlightFont;
  SDL_Color _titleColor1, _titleColor2, _breadColor, _highlightColor, _bgColor;
  int _currentSelection, _subMenu;

};
