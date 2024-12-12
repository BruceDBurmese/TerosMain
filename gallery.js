// Event data array to hold image sources, titles, and descriptions
const events = [
    { images: ['image.jpg', 'image3.jpg'], title: 'Battle of the Bands', description: 'Featuring CODE-X of ICS!' },
    { images: ['image2.jpg', 'image4.jpg'], title: 'MR. AND MS. TCGC 2024', description: 'Featuring me and MS. ICS: Erika Ramos' },
    { images: ['opening.jpg', 'opening2.jpg'], title: 'The Grand Opening of LMC 2024', description: 'What a majestic opening!' }
];

let currentEventIndex = 0; // To track the current event index in the modal
let currentImageIndex = 0; // To track the current image index for each event

// Function to open the modal and display the correct image and description
function openModal(index) {
    currentEventIndex = index; // Set the index for the clicked event
    currentImageIndex = 0; // Start from the first image of the event

    const modal = document.getElementById("modal");
    const modalImg = document.getElementById("modal-img");
    const caption = document.getElementById("modal-caption");

    // Set the modal image and caption text based on the clicked event
    modalImg.src = events[index].images[currentImageIndex];
    caption.innerHTML = `<h2>${events[index].title}</h2><p>${events[index].description}</p>`;

    // Show the modal
    modal.style.display = "block";
}

// Function to close the modal
function closeModal() {
    const modal = document.getElementById("modal");
    modal.style.display = "none"; // Hide the modal
}

// Function to change the image in the modal (previous/next)
function changeImage(direction) {
    // Update the current image index for the event
    currentImageIndex += direction;

    // Ensure we loop around the images in the event
    if (currentImageIndex < 0) currentImageIndex = events[currentEventIndex].images.length - 1;
    if (currentImageIndex >= events[currentEventIndex].images.length) currentImageIndex = 0;

    // Update the modal content with the new image and description
    const modalImg = document.getElementById("modal-img");
    const caption = document.getElementById("modal-caption");
    modalImg.src = events[currentEventIndex].images[currentImageIndex];
    caption.innerHTML = `<h2>${events[currentEventIndex].title}</h2><p>${events[currentEventIndex].description}</p>`;
}
