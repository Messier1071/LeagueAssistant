import HttpRequest from "./request.js";


//const express = require("express");
// const cors = require("cors");
// const fs = require("fs");

function test(some){
  activePlayer = some;
  console.log(activePlayer.currentGold)
}

var activePlayer;
var allPlayers


  HttpRequest("https://127.0.0.1:2999/liveclientdata/activeplayer",test)

    console.log(activePlayer);
  






