public htmlpage

text segment code
     rseg text

htmlpage:

db'<!DOCTYPE html>', 0dh, 0ah
db'', 0dh, 0ah
db'<html> ', 0dh, 0ah
db'  ', 0dh, 0ah
db'<head>', 0dh, 0ah
db'<title>Aplicação SMP</title>', 0dh, 0ah
db'<meta name="viewport" content="width=device-width, initial-scale=1.0">', 0dh, 0ah
db'<style>', 0dh, 0ah
db'.button {', 0dh, 0ah
db'  background-color: #04AA6D; /* Green */', 0dh, 0ah
db'  border: none;', 0dh, 0ah
db'  border-radius: 12px;', 0dh, 0ah
db'  color: white; ', 0dh, 0ah
db'  font-size: 16px;', 0dh, 0ah
db'  width: 125px;', 0dh, 0ah
db'  height: 60px;', 0dh, 0ah
db'}', 0dh, 0ah
db'body {', 0dh, 0ah
db'  background-color: lightblue;', 0dh, 0ah
db"  background-image: url('https://wallpaperaccess.com/full/1418782.jpg');", 0dh, 0ah
db'  background-repeat: no-repeat;', 0dh, 0ah
db'  background-attachment: fixed; ', 0dh, 0ah
db'  background-size: cover;       ', 0dh, 0ah
db'}                               ', 0dh, 0ah
db'</style>                        ', 0dh, 0ah
db'</head>                         ', 0dh, 0ah
db'                                ', 0dh, 0ah
db'<body>                         ', 0dh, 0ah
db'<h1 style="color:Orange;">CONTROLE DE LÂMPADAS</h1> ', 0dh, 0ah
db'<p style="color:#3cb371">Selecione um dos botões</p> ', 0dh, 0ah
db'<p><button class="button" id = "bt1" onclick="loadDoc(1)">LAMP1</button></p>', 0dh, 0ah
db'<p><button class="button" id = "bt2" onclick="loadDoc(2)">LAMP2</button></p> ', 0dh, 0ah
db'<p><button class="button" id = "bt3" onclick="loadDoc(3)">LAMP3</button></p> ', 0dh, 0ah
db'<p><button class="button" id = "bt4" onclick="loadDoc(4)">LAMP4</button></p>', 0dh, 0ah
db' ', 0dh, 0ah
db'<script> ', 0dh, 0ah
db'', 0dh, 0ah
db'function loadDoc(a) { ', 0dh, 0ah
db'  var bt = "bt" + a;', 0dh, 0ah
db'  var lamp = "lampcntl" + a; ', 0dh, 0ah
db'  document.getElementById(bt).style.backgroundColor = "#808080";', 0dh, 0ah
db'  const xhttp = new XMLHttpRequest();   ', 0dh, 0ah
db'  xhttp.onload = function() { ', 0dh, 0ah
db'    if (this.responseText==0) {  ', 0dh, 0ah
db'      document.getElementById(bt).style.backgroundColor = "#04AA6D";', 0dh, 0ah
db'    } else {', 0dh, 0ah
db'      document.getElementById(bt).style.backgroundColor = "red";', 0dh, 0ah
db'    }', 0dh, 0ah
db'  }  ', 0dh, 0ah
db'  xhttp.open("GET", lamp, true); ', 0dh, 0ah
db'  xhttp.send();', 0dh, 0ah
db'}    ', 0dh, 0ah
db'</script> ', 0dh, 0ah
db'</body>  ', 0dh, 0ah
db'       ', 0dh, 0ah
db'</html>   ', 0dh, 0ah
end