#include <iostream>
#include <string>
using namespace std;

// ------------------------------------------------------------
// Step 2: Energy Consumption Monitoring Function
// ------------------------------------------------------------

void energyConsumptionMonitoring(
    float totalEnergyUnitsConsumed,
    int numberOfConnectedAppliances,
    float operatingHours,
    float loadDemand,
    string peakUsageTime,
    float powerFactor,
    float currentConsumption
)
{
    cout << "\n========== ENERGY CONSUMPTION MONITORING ==========" << endl;

    cout << "Total Energy Units Consumed: " << totalEnergyUnitsConsumed << " kWh" << endl;
    cout << "Connected Appliances: " << numberOfConnectedAppliances << endl;
    cout << "Operating Hours: " << operatingHours << " Hours" << endl;
    cout << "Load Demand: " << loadDemand << " kW" << endl;
    cout << "Peak Usage Time: " << peakUsageTime << endl;
    cout << "Power Factor: " << powerFactor << endl;
    cout << "Current Consumption: " << currentConsumption << " A" << endl;
}

// ------------------------------------------------------------
// Step 3: Smart Bill Calculation Function
// ------------------------------------------------------------

float smartBillCalculation(
    float totalConsumedUnits,
    float tariffRatePerUnit,
    float peakHourCharges,
    float fixedMeterCharges,
    float taxPercentage,
    float subsidyAmount,
    float previousUnpaidBalance
)
{
    float basicBill;
    float taxAmount;
    float finalBill;

    basicBill = totalConsumedUnits * tariffRatePerUnit;

    taxAmount = (basicBill * taxPercentage) / 100;

    finalBill = basicBill + peakHourCharges + fixedMeterCharges + taxAmount + previousUnpaidBalance - subsidyAmount;

    cout << "\n========== SMART BILL CALCULATION ==========" << endl;
    cout << "Basic Bill: Rs. " << basicBill << endl;
    cout << "Tax Amount: Rs. " << taxAmount << endl;
    cout << "Final Electricity Bill: Rs. " << finalBill << endl;

    return finalBill;
}

// ------------------------------------------------------------
// Step 4: Net Metering Function
// ------------------------------------------------------------

float netMeteringSystem(
    float consumedEnergyUnits,
    float solarGeneratedUnits,
    float solarPanelEfficiency,
    float batteryStorageCapacity,
    float gridExportUnits,
    float gridImportUnits,
    float netMeteringCreditRate
)
{
    float netUnits;
    float creditAmount;

    netUnits = consumedEnergyUnits - solarGeneratedUnits;

    if(netUnits < 0)
    {
        netUnits = 0;
    }

    creditAmount = gridExportUnits * netMeteringCreditRate;

    cout << "\n========== NET METERING SYSTEM ==========" << endl;
    cout << "Consumed Energy Units: " << consumedEnergyUnits << " kWh" << endl;
    cout << "Solar Generated Units: " << solarGeneratedUnits << " kWh" << endl;
    cout << "Solar Panel Efficiency: " << solarPanelEfficiency << "%" << endl;
    cout << "Battery Storage Capacity: " << batteryStorageCapacity << " kWh" << endl;
    cout << "Grid Export Units: " << gridExportUnits << " kWh" << endl;
    cout << "Grid Import Units: " << gridImportUnits << " kWh" << endl;
    cout << "Net Payable Units: " << netUnits << " kWh" << endl;
    cout << "Net Metering Credit Amount: Rs. " << creditAmount << endl;

    return netUnits;
}

// ------------------------------------------------------------
// Step 5: Voltage Protection Function
// ------------------------------------------------------------

void voltageProtectionSystem(
    float inputVoltage,
    float maximumSafeVoltageLimit,
    float minimumSafeVoltageLimit,
    float currentLoad,
    float frequency,
    float surgeDetectionValue,
    int relayResponseTime
)
{
    cout << "\n========== VOLTAGE PROTECTION SYSTEM ==========" << endl;

    cout << "Input Voltage: " << inputVoltage << " V" << endl;
    cout << "Current Load: " << currentLoad << " A" << endl;
    cout << "Frequency: " << frequency << " Hz" << endl;
    cout << "Surge Detection Value: " << surgeDetectionValue << endl;
    cout << "Relay Response Time: " << relayResponseTime << " ms" << endl;

    if(inputVoltage > maximumSafeVoltageLimit)
    {
        cout << "WARNING: Over Voltage Detected!" << endl;
        cout << "Protection Relay Activated." << endl;
    }

    else if(inputVoltage < minimumSafeVoltageLimit)
    {
        cout << "WARNING: Under Voltage Detected!" << endl;
        cout << "Protection Relay Activated." << endl;
    }

    else
    {
        cout << "Voltage is within Safe Operating Range." << endl;
    }
}

// ------------------------------------------------------------
// Step 6: Overheating Protection Function
// ------------------------------------------------------------

void overheatingProtectionSystem(
    float systemTemperature,
    float maximumTemperatureLimit,
    float coolingFanSpeed,
    float heatDissipationRate,
    float deviceOperatingTime,
    float ambientRoomTemperature,
    float thermalSensorReading
)
{
    cout << "\n========== OVERHEATING PROTECTION SYSTEM ==========" << endl;

    cout << "System Temperature: " << systemTemperature << " °C" << endl;
    cout << "Cooling Fan Speed: " << coolingFanSpeed << " RPM" << endl;
    cout << "Heat Dissipation Rate: " << heatDissipationRate << endl;
    cout << "Device Operating Time: " << deviceOperatingTime << " Hours" << endl;
    cout << "Ambient Room Temperature: " << ambientRoomTemperature << " °C" << endl;
    cout << "Thermal Sensor Reading: " << thermalSensorReading << " °C" << endl;

    if(systemTemperature > maximumTemperatureLimit)
    {
        cout << "WARNING: System Overheating Detected!" << endl;
        cout << "Cooling System Activated." << endl;
    }

    else
    {
        cout << "Temperature is within Safe Operating Range." << endl;
    }
}

// ------------------------------------------------------------
// Main Function
// ------------------------------------------------------------

int main()
{
    // Energy Monitoring Variables
    float totalEnergyUnitsConsumed;
    int numberOfConnectedAppliances;
    float operatingHours;
    float loadDemand;
    string peakUsageTime;
    float powerFactor;
    float currentConsumption;

    // Bill Calculation Variables
    float tariffRatePerUnit;
    float peakHourCharges;
    float fixedMeterCharges;
    float taxPercentage;
    float subsidyAmount;
    float previousUnpaidBalance;

    // Net Metering Variables
    float solarGeneratedUnits;
    float solarPanelEfficiency;
    float batteryStorageCapacity;
    float gridExportUnits;
    float gridImportUnits;
    float netMeteringCreditRate;

    // Voltage Protection Variables
    float inputVoltage;
    float maximumSafeVoltageLimit;
    float minimumSafeVoltageLimit;
    float currentLoad;
    float frequency;
    float surgeDetectionValue;
    int relayResponseTime;

    // Overheating Protection Variables
    float systemTemperature;
    float maximumTemperatureLimit;
    float coolingFanSpeed;
    float heatDissipationRate;
    float deviceOperatingTime;
    float ambientRoomTemperature;
    float thermalSensorReading;

    // ------------------------------------------------------------
    // User Input Section
    // ------------------------------------------------------------

    cout << "========== RESIDENTIAL SMART ENERGY MANAGEMENT SYSTEM ==========" << endl;

    // Energy Monitoring Inputs
    cout << "\nEnter Total Energy Units Consumed (kWh): ";
    cin >> totalEnergyUnitsConsumed;

    cout << "Enter Number of Connected Appliances: ";
    cin >> numberOfConnectedAppliances;

    cout << "Enter Operating Hours: ";
    cin >> operatingHours;

    cout << "Enter Load Demand (kW): ";
    cin >> loadDemand;

    cin.ignore();
    cout << "Enter Peak Usage Time: ";
    getline(cin, peakUsageTime);

    cout << "Enter Power Factor: ";
    cin >> powerFactor;

    cout << "Enter Current Consumption (A): ";
    cin >> currentConsumption;

    // Bill Inputs
    cout << "\nEnter Tariff Rate Per Unit: ";
    cin >> tariffRatePerUnit;

    cout << "Enter Peak Hour Charges: ";
    cin >> peakHourCharges;

    cout << "Enter Fixed Meter Charges: ";
    cin >> fixedMeterCharges;

    cout << "Enter Tax Percentage: ";
    cin >> taxPercentage;

    cout << "Enter Subsidy Amount: ";
    cin >> subsidyAmount;

    cout << "Enter Previous Unpaid Balance: ";
    cin >> previousUnpaidBalance;

    // Net Metering Inputs
    cout << "\nEnter Solar Generated Units (kWh): ";
    cin >> solarGeneratedUnits;

    cout << "Enter Solar Panel Efficiency (%): ";
    cin >> solarPanelEfficiency;

    cout << "Enter Battery Storage Capacity (kWh): ";
    cin >> batteryStorageCapacity;

    cout << "Enter Grid Export Units (kWh): ";
    cin >> gridExportUnits;

    cout << "Enter Grid Import Units (kWh): ";
    cin >> gridImportUnits;

    cout << "Enter Net Metering Credit Rate: ";
    cin >> netMeteringCreditRate;

    // Voltage Protection Inputs
    cout << "\nEnter Input Voltage (V): ";
    cin >> inputVoltage;

    cout << "Enter Maximum Safe Voltage Limit (V): ";
    cin >> maximumSafeVoltageLimit;

    cout << "Enter Minimum Safe Voltage Limit (V): ";
    cin >> minimumSafeVoltageLimit;

    cout << "Enter Current Load (A): ";
    cin >> currentLoad;

    cout << "Enter Frequency (Hz): ";
    cin >> frequency;

    cout << "Enter Surge Detection Value: ";
    cin >> surgeDetectionValue;

    cout << "Enter Relay Response Time (ms): ";
    cin >> relayResponseTime;

    // Overheating Protection Inputs
    cout << "\nEnter System Temperature (°C): ";
    cin >> systemTemperature;

    cout << "Enter Maximum Temperature Limit (°C): ";
    cin >> maximumTemperatureLimit;

    cout << "Enter Cooling Fan Speed (RPM): ";
    cin >> coolingFanSpeed;

    cout << "Enter Heat Dissipation Rate: ";
    cin >> heatDissipationRate;

    cout << "Enter Device Operating Time (Hours): ";
    cin >> deviceOperatingTime;

    cout << "Enter Ambient Room Temperature (°C): ";
    cin >> ambientRoomTemperature;

    cout << "Enter Thermal Sensor Reading (°C): ";
    cin >> thermalSensorReading;

    // ------------------------------------------------------------
    // Function Calls
    // ------------------------------------------------------------

    energyConsumptionMonitoring(
        totalEnergyUnitsConsumed,
        numberOfConnectedAppliances,
        operatingHours,
        loadDemand,
        peakUsageTime,
        powerFactor,
        currentConsumption
    );

    float netUnits = netMeteringSystem(
        totalEnergyUnitsConsumed,
        solarGeneratedUnits,
        solarPanelEfficiency,
        batteryStorageCapacity,
        gridExportUnits,
        gridImportUnits,
        netMeteringCreditRate
    );

    float finalBill = smartBillCalculation(
        netUnits,
        tariffRatePerUnit,
        peakHourCharges,
        fixedMeterCharges,
        taxPercentage,
        subsidyAmount,
        previousUnpaidBalance
    );

    voltageProtectionSystem(
        inputVoltage,
        maximumSafeVoltageLimit,
        minimumSafeVoltageLimit,
        currentLoad,
        frequency,
        surgeDetectionValue,
        relayResponseTime
    );

    overheatingProtectionSystem(
        systemTemperature,
        maximumTemperatureLimit,
        coolingFanSpeed,
        heatDissipationRate,
        deviceOperatingTime,
        ambientRoomTemperature,
        thermalSensorReading
    );

    // ------------------------------------------------------------
    // Final Output
    // ------------------------------------------------------------

    cout << "\n========== FINAL SYSTEM REPORT ==========" << endl;
    cout << "Net Payable Units: " << netUnits << " kWh" << endl;
    cout << "Total Electricity Bill: Rs. " << finalBill << endl;

    cout << "\nSystem Execution Completed Successfully." << endl;

    return 0;
}
