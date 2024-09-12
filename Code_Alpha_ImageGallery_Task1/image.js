const images = [
    'image1.jpg',
    'image2.jpg',
    
];

let currentImageIndex = 0;
const galleryImage = document.getElementById('galleryImage');
const prevBtn = document.getElementById('prevBtn');
const nextBtn = document.getElementById('nextBtn');

// Function to update image
function updateImage() {
    galleryImage.src = images[currentImageIndex];
}

// Previous button event listener
prevBtn.addEventListener('click', function() {
    currentImageIndex = (currentImageIndex === 0) ? images.length - 1 : currentImageIndex - 1;
    updateImage();
});

// Next button event listener
nextBtn.addEventListener('click', function() {
    currentImageIndex = (currentImageIndex === images.length - 1) ? 0 : currentImageIndex + 1;
    updateImage();
});

// Initialize with the first image
updateImage();
