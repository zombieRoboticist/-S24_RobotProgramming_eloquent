from setuptools import setup, find_packages
from glob import glob
import os

package_name = 'rosmaster_sim'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('urdf/*')),
        (os.path.join('share', package_name, 'launch'),
            glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
        (os.path.join('share', package_name), glob('rviz/*')),
        (os.path.join('share',package_name,'meshes/sensor'),glob(os.path.join('meshes/sensor','*.*'))),
        (os.path.join('share',package_name,'meshes/mecanum'),glob(os.path.join('meshes/mecanum','*.*'))),
        (os.path.join('share',package_name,'meshes/Ackerman'),glob(os.path.join('meshes/Ackerman','*.*'))),
        (os.path.join('share',package_name,'urdf'),glob(os.path.join('urdf','*.*'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yahboom',
    maintainer_email='jmarcotte227@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
