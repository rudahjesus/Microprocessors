var flag = 0;

function loadDoc() {
    if (flag==0){
        document.getElementById("btn").style.backgroundColor = "red";
        flag = 1;
      } else {
       document.getElementById("btn").style.backgroundColor = "#04AA6D";
       flag = 0;
      }
  }