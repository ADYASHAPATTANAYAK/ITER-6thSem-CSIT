const slides = document.querySelector('.slides');
const prevButton = document.querySelector('.prev');
const nextButton = document.querySelector('.next');
const totalSlides = document.querySelectorAll('.slide').length;

let index = 0;

function showSlide(index) {
    const slideWidth = document.querySelector('.slide').clientWidth;
    slides.style.transform = 'translateX(' + (-index * slideWidth) + 'px)';
}

prevButton.addEventListener('click', () => {
    if (index === 0) {
        index = totalSlides - 1;
    } else {
        index--;
    }
    showSlide(index);
});

nextButton.addEventListener('click', () => {
    if (index === totalSlides - 1) {
        index = 0;
    } else {
        index++;
    }
    showSlide(index);
});

let autoPlayInterval;

function startAutoPlay() {
    autoPlayInterval = setInterval(() => {
        nextButton.click();
    }, 3000); // Change slide every 3 seconds
}

function stopAutoPlay() {
    clearInterval(autoPlayInterval);
}

document.querySelector('.slider').addEventListener('mouseover', stopAutoPlay);
document.querySelector('.slider').addEventListener('mouseout', startAutoPlay);

startAutoPlay();
