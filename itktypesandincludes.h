#ifndef DICOMTYPEDEFS_H
#define DICOMTYPEDEFS_H

#include <itkImage.h>
#include <itkGDCMImageIO.h>
#include <itkGDCMSeriesFileNames.h>
#include <itkImageSeriesReader.h>
#include <itkImageRegistrationMethod.h>
#include <itkTranslationTransform.h>
#include <itkMeanSquaresImageToImageMetric.h>
#include <itkRegularStepGradientDescentOptimizer.h>
#include <itkResampleImageFilter.h>
#include <itkSubtractImageFilter.h>
#include <itkRescaleIntensityImageFilter.h>
#include "itkImageToVTKImageFilter.h"



// Some Typedefs and Definitions for ITK
typedef  signed short PixelType;
static const unsigned int dimension = 3;
typedef itk::Image<PixelType, dimension> ImageType;
typedef itk::ImageSeriesReader< ImageType > ReaderType;
typedef itk::ImageToVTKImageFilter <ImageType> FilterType;
typedef itk::GDCMImageIO ImageIOType;
typedef itk::GDCMSeriesFileNames NamesGeneratorType;

typedef itk::TranslationTransform<double, dimension> TransformType;
typedef itk::RegularStepGradientDescentOptimizer OptimizerType;
typedef itk::MeanSquaresImageToImageMetric<ImageType, ImageType> MetricType;
typedef itk::LinearInterpolateImageFunction< ImageType, double> InterpolatorType;
typedef itk::ImageRegistrationMethod<ImageType, ImageType> RegistrationType;
typedef itk::ResampleImageFilter<ImageType, ImageType> ResampleFilterType;
typedef itk::SubtractImageFilter<ImageType,ImageType,ImageType> DifferenceFilterType;
typedef itk::RescaleIntensityImageFilter<ImageType,ImageType> RescalerType;

#endif // DICOMTYPEDEFS_H
