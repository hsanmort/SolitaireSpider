void intiScreen()
{
    if(SDL_Init(SDL_INIT_EVERYTHING) == -1)
    {
        cout << "failed to load SDL(EVERY_THING)"<<endl;
    }
    else{
        SDL_WM_SetCaption("SDL Test", "SDL Test");
        screen = SDL_SetVideoMode(SCREEN_WIDTH, SCREEn_HEIGHT, 0, 0);
    }
}
