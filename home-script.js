window.addEventListener("load", function () {

    const profileSection = document.querySelector(".profile-section");
    const profilePic = document.querySelector(".profile-pic img");
    const personalDetails = document.querySelector(".personal-details");


    profileSection.style.opacity = 0;
    profilePic.style.opacity = 0;
    personalDetails.style.opacity = 0;


    setTimeout(() => {
        profileSection.style.transition = "opacity 1s ease-in-out";
        profilePic.style.transition = "opacity 1s ease-in-out";
        personalDetails.style.transition = "opacity 1s ease-in-out";

        profileSection.style.opacity = 1;
        profilePic.style.opacity = 1;
        personalDetails.style.opacity = 1;
    }, 200);


    const circles = document.querySelectorAll(".animation-box");
    circles.forEach((circle, index) => {
       
        circle.style.animationDelay = `${index * 0.5}s`;
    });

    
    document.getElementById('logoutButton').addEventListener('click', function () {
        
        sessionStorage.clear(); 
        localStorage.clear();   

      
        window.location.href = 'index.html';
    });
});
