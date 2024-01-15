let btn1=document.querySelector("#toggle");
btn1.style.backgroundColor="black";
btn1.style.color="white";
let mode="light";
btn1.addEventListener("click",()=>{
    if(mode==="light"){
       document.querySelector("body").style.backgroundColor="black";
       document.querySelector("body").style.color="white";
       btn1.style.backgroundColor="white";
       btn1.style.color="black";
       btn1.innerHTML="Dark-Mode";
       mode="dark";
    }else{
        document.querySelector("body").style.backgroundColor="white";
        document.querySelector("body").style.color="black";
        btn1.style.backgroundColor="black";
        btn1.style.color="white";
        btn1.innerHTML="Light-Mode";
        mode="light";
    }
});

