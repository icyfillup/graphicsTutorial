#pragma once

#include <SDL/SDL.h>
#include <GL/glew.h>

#include <Bengine/Bengine.h>
#include <Bengine/GLSLProgram.h>
#include <Bengine/GLTexture.h>
#include <Bengine/Sprite.h>
#include <Bengine/Window.h>

#include <Bengine/Camera2D.h>

#include <vector>

enum class GameState {PLAY, EXIT};

//Our example game class, just for testing purposes right now
class MainGame
{
public:
    MainGame();
    ~MainGame();

    void run();

private:
    void initSystems();
    void initShaders();
    void gameLoop();
    void processInput();
    void drawGame();
    void calculateFPS();

    Bengine::Window _window;
    int _screenWidth;
    int _screenHeight;
    GameState _gameState;

    std::vector <Bengine::Sprite*> _sprites;

    Bengine::GLSLProgram _colorProgram;
    Bengine::Camera2D _camera;

    float _fps;
    float _maxFPS;
    float _frameTime;

    float _time;
};

