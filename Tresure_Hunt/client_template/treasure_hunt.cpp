#include <duels/treasure_hunt/game.h>

using namespace duels::treasure_hunt;

int main()
{
  Game game;

  inputMsg input;
  feedbackMsg feedback;
  const auto timeout = game.timeout;

  while(game.get(feedback))
  {
    // write input in less than timeout



    game.send(input);
  }
}
