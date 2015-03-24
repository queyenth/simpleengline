#include "Rect.h"

#include "Texture.h"

Rect::Rect() {
  left = top = right = bottom = 0.0f;
}

Rect::Rect(float left, float top, float right, float bottom) {
  this->left = left;
  this->right = right;
  this->top = top;
  this->bottom = bottom;
}

Rect::Rect(const Texture &texture) {
  this->left = 0;
  this->right = (float)texture.GetWidth();
  this->top = 0;
  this->bottom = (float)texture.GetHeight();
}
