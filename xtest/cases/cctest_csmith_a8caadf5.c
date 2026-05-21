// SPDX-License-Identifier: MIT
// cctest_csmith_a8caadf5.c --- cctest case csmith_a8caadf5 (csmith seed 2831855093)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x81894bc2 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 2831855093 -o /tmp/csmith_gen_55x0_087/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   const uint64_t  f1;
   int8_t  f2;
   uint32_t  f3;
   int16_t  f4;
   int32_t  f5;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   int32_t  f1;
   uint16_t  f2;
   int16_t  f3;
};

union U2 {
   const int32_t  f0;
   uint32_t  f1;
};

union U3 {
   int32_t  f0;
};


static uint8_t g_14[1][4] = {{7UL,7UL,7UL,7UL}};
static uint16_t g_22 = 0x859BL;
static int8_t g_23 = 0x55L;
static uint32_t g_24 = 0x3B16AAC8L;
static struct S0 g_25[5] = {{0xC7153413L,0x08700D35DA2A0C0ELL,-1L,0UL,0xE81DL,0x9829CBC2L},{0xC7153413L,0x08700D35DA2A0C0ELL,-1L,0UL,0xE81DL,0x9829CBC2L},{0xC7153413L,0x08700D35DA2A0C0ELL,-1L,0UL,0xE81DL,0x9829CBC2L},{0xC7153413L,0x08700D35DA2A0C0ELL,-1L,0UL,0xE81DL,0x9829CBC2L},{0xC7153413L,0x08700D35DA2A0C0ELL,-1L,0UL,0xE81DL,0x9829CBC2L}};
static int64_t g_32 = 0xC5395F87B70D8AC5LL;
static int16_t g_33 = 0x5B97L;
static uint16_t g_35 = 2UL;
static union U3 g_53 = {-1L};
static int64_t g_60 = 0L;
static int32_t g_66[1] = {0x3AA7A400L};
static const union U1 g_160[4] = {{{0xF647370DL,0x34B6E5E779DA6E5CLL,-5L,18446744073709551610UL,0x22E1L,-10L}},{{0xF647370DL,0x34B6E5E779DA6E5CLL,-5L,18446744073709551610UL,0x22E1L,-10L}},{{0xF647370DL,0x34B6E5E779DA6E5CLL,-5L,18446744073709551610UL,0x22E1L,-10L}},{{0xF647370DL,0x34B6E5E779DA6E5CLL,-5L,18446744073709551610UL,0x22E1L,-10L}}};
static uint16_t g_175 = 0x612CL;
static union U2 g_192 = {-1L};
static int16_t g_198[2][5][1] = {{{0xECEFL},{0xECEFL},{0xECEFL},{0xECEFL},{0xECEFL}},{{0xECEFL},{0xECEFL},{0xECEFL},{0xECEFL},{0xECEFL}}};
static uint32_t g_224 = 0xCCA75C68L;
static int32_t g_241 = (-9L);
static int8_t g_243 = 0x18L;
static uint64_t g_244[3] = {0xCFB3C6D7EFADBB90LL,0xCFB3C6D7EFADBB90LL,0xCFB3C6D7EFADBB90LL};
static int16_t g_263 = (-6L);
static int32_t g_303 = 0L;
static uint64_t g_305[2][5][2] = {{{18446744073709551615UL,0xE5FC7B0A1C40503BLL},{18446744073709551615UL,0xE5FC7B0A1C40503BLL},{18446744073709551615UL,0xE5FC7B0A1C40503BLL},{18446744073709551615UL,0xE5FC7B0A1C40503BLL},{18446744073709551615UL,0xE5FC7B0A1C40503BLL}},{{18446744073709551615UL,0xE5FC7B0A1C40503BLL},{18446744073709551615UL,0xE5FC7B0A1C40503BLL},{18446744073709551615UL,0xE5FC7B0A1C40503BLL},{18446744073709551615UL,0xE5FC7B0A1C40503BLL},{18446744073709551615UL,0xE5FC7B0A1C40503BLL}}};
static const uint8_t g_335 = 0UL;
static int32_t g_336 = 7L;
static int8_t g_396 = 0x9EL;
static int64_t g_461 = 0x4AAA26E0781368C2LL;



static int64_t  func_1(void);
static uint64_t  func_4(const int32_t  p_5, uint64_t  p_6);
static uint64_t  func_8(int64_t  p_9, int64_t  p_10, const uint32_t  p_11, int32_t  p_12, uint16_t  p_13);
static int64_t  func_15(int32_t  p_16, struct S0  p_17, int32_t  p_18, const uint32_t  p_19);




static int64_t  func_1(void)
{ 
    const int32_t l_7[2] = {0x16DB6D03L,0x16DB6D03L};
    const uint64_t l_40 = 7UL;
    int32_t l_217[4] = {0x1BC9E080L,0x1BC9E080L,0x1BC9E080L,0x1BC9E080L};
    int32_t l_236 = 7L;
    struct S0 l_314 = {0x88C7B8C2L,0xCB5496BFD42704B4LL,0x2EL,18446744073709551614UL,0L,1L};
    uint16_t l_344 = 8UL;
    union U1 l_353 = {{0xDBD7DCAFL,0x491147520D192F70LL,5L,0xBEF9D2DDL,0x317AL,0x1B2F9461L}};
    uint32_t l_366 = 4294967295UL;
    int32_t l_383 = (-5L);
    int64_t l_397 = 1L;
    uint64_t l_399[1];
    int16_t l_408 = 8L;
    uint32_t l_428 = 0x11073F22L;
    int64_t l_450 = 0x959661153BA33486LL;
    uint8_t l_464 = 0xC1L;
    int i;
    for (i = 0; i < 1; i++)
        l_399[i] = 4UL;
    if ((safe_mod_func_uint64_t_u_u(func_4(l_7[1], func_8(g_14[0][0], func_15((g_24 &= (safe_mod_func_int8_t_s_s(0x44L, (g_23 = (g_22 = (4294967293UL && g_14[0][0])))))), g_25[3], g_25[3].f2, g_25[3].f4), l_40, l_7[1], l_7[1])), (-10L))))
    { 
        uint32_t l_195 = 18446744073709551606UL;
        int32_t l_199 = 0x031B6475L;
        int32_t l_214 = (-1L);
        int32_t l_218 = (-2L);
        int32_t l_221[2];
        uint64_t l_261 = 0UL;
        union U2 l_289 = {0L};
        uint32_t l_323 = 0xB03EBF28L;
        int i;
        for (i = 0; i < 2; i++)
            l_221[i] = (-1L);
        if (((safe_lshift_func_int16_t_s_s((-5L), (~((0x40L <= (g_66[0] , (safe_div_func_int64_t_s_s((g_192 , g_25[3].f3), 18446744073709551606UL)))) < g_14[0][2])))) == 0x8EA7C47B9E94D02DLL))
        { 
            uint64_t l_206 = 0xF670FADFD20B6814LL;
            g_53.f0 = 5L;
            l_206 = (safe_mod_func_uint64_t_u_u((l_199 = (g_198[1][2][0] = (l_195++))), (safe_rshift_func_uint16_t_u_s((((4294967292UL ^ 0x9218DC8AL) <= (((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_160[0].f0.f2, (-2L))), g_160[0].f3)) , 4294967295UL) ^ 6L)) ^ 0x20L), 14))));
        }
        else
        { 
            uint32_t l_213 = 0xDB27BB03L;
            int16_t l_215 = 0xAA5BL;
            int32_t l_216 = 1L;
            int32_t l_219 = (-6L);
            int32_t l_220 = 0x444C74A6L;
            int32_t l_222 = 0x4C68921BL;
            int32_t l_223[3];
            int i;
            for (i = 0; i < 3; i++)
                l_223[i] = (-7L);
            l_214 = ((g_60 |= (((safe_div_func_int64_t_s_s((l_199 = (-1L)), (g_160[0].f0.f5 & (+4UL)))) & (((!(safe_add_func_uint8_t_u_u(g_25[3].f2, l_213))) == g_192.f1) && 0x614B01E4L)) <= g_23)) < g_24);
            g_224++;
        }
        if ((safe_lshift_func_uint8_t_u_u((((safe_unary_minus_func_int32_t_s((((g_33 = g_22) | g_14[0][1]) > ((g_24 = 0x8B1A2417L) > g_35)))) != l_199) || 65528UL), g_22)))
        { 
            int8_t l_237 = 2L;
            l_199 = (safe_add_func_uint64_t_u_u((l_214 = ((1UL & (g_160[2] , (1L && (safe_div_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((g_24 |= g_25[3].f2), l_236)) , g_14[0][0]), g_33))))) , g_60)), l_237));
        }
        else
        { 
            uint8_t l_240 = 0x1EL;
            int32_t l_242 = 0xC1BD2060L;
            struct S0 l_292 = {0x1AB6AC64L,18446744073709551607UL,0x02L,9UL,0L,-5L};
lbl_313:
            if (((safe_sub_func_int64_t_s_s(l_240, (g_244[0]--))) == ((safe_lshift_func_int16_t_s_s(((g_198[1][2][0] != (g_160[0].f0.f1 < ((l_217[0] , g_25[3].f2) | 0x64L))) || (-1L)), 13)) && 9UL)))
            { 
                int32_t l_259[1][2][4] = {{{0x11CC2D51L,0x7B843D4BL,0x11CC2D51L,0x7B843D4BL},{0x11CC2D51L,0x7B843D4BL,0x11CC2D51L,0x7B843D4BL}}};
                int32_t l_260 = 0x54A8DD36L;
                int32_t l_262 = 0L;
                int i, j, k;
                g_25[3].f5 ^= (g_25[3].f0 || (g_35 = (((l_262 = (safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s(g_241, (safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((((l_260 &= (((g_198[1][2][0] >= ((((l_242 ^= (g_241 || l_240)) >= g_25[3].f0) < l_221[0]) > g_198[1][2][0])) == g_160[0].f0.f2) <= l_259[0][1][2])) >= g_66[0]) , g_160[0].f0.f2), 0x54L)), l_261)))), g_192.f0))) <= l_240) ^ g_263)));
            }
            else
            { 
                uint32_t l_279 = 0xD7ECCB46L;
                l_236 = (safe_lshift_func_uint8_t_u_s((g_14[0][2] ^= (((safe_mul_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int8_t_s((g_23 = l_242))), (safe_div_func_uint8_t_u_u(((g_192.f1 || l_217[0]) || (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_224, 255UL)), 0x3DL)), 9))), l_279)))) & g_60) > l_240) & g_25[3].f4), 0UL)) != g_160[0].f0.f0) && l_242)), 0));
                g_66[0] = (0x6741604F6BAB0A81LL != (g_25[3].f0 == (((!(safe_mod_func_uint8_t_u_u((l_214 = ((safe_lshift_func_uint16_t_u_s(5UL, 2)) == 0L)), 0xFFL))) ^ g_35) != 0x735EL)));
            }
            if ((safe_sub_func_uint8_t_u_u(0x60L, (((l_289 , (((((safe_mod_func_uint8_t_u_u(((l_292 , (l_292.f4 >= l_7[1])) || 0x56L), g_60)) != l_242) < 0x2C6D5A98L) || g_14[0][1]) && 0xF6918CF426D5CE32LL)) , g_14[0][0]) && g_25[3].f5))))
            { 
                uint64_t l_302 = 0x3AB674E5CEED9E4BLL;
                int32_t l_304[1][5][1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_304[i][j][k] = (-2L);
                    }
                }
                l_304[0][4][0] = ((safe_add_func_uint16_t_u_u((g_198[0][1][0] && (~(safe_mod_func_uint8_t_u_u(((g_14[0][0] ^= l_289.f0) & (g_303 ^= (safe_mul_func_int16_t_s_s(((-4L) && ((safe_add_func_int8_t_s_s(g_160[0].f0.f3, l_302)) >= l_242)), 65535UL)))), g_66[0])))), l_292.f2)) >= 0x090D04531A60633FLL);
                g_305[0][0][0]--;
            }
            else
            { 
                int16_t l_308 = 0x2350L;
                int32_t l_309 = (-7L);
                uint16_t l_310 = 1UL;
                --l_310;
                if (l_40)
                    goto lbl_313;
                l_323 = (((l_314 , (((((((++g_14[0][0]) , (l_214 = g_33)) < (safe_mod_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(l_292.f2, (safe_sub_func_uint32_t_u_u((l_261 > l_217[0]), l_314.f5)))) > 0x41L), g_244[2]))) && g_263) || 0x32C3L) , l_199) < l_217[0])) != g_66[0]) ^ l_292.f3);
            }
        }
        g_25[3].f0 = (l_221[0] || l_7[1]);
    }
    else
    { 
        uint8_t l_324 = 0xC4L;
        int32_t l_337 = 0x5C09B097L;
        g_66[0] = l_324;
        g_336 |= (0xEC0D1825L <= ((((safe_mul_func_int8_t_s_s(l_324, (-1L))) != ((l_217[0] ^= (safe_div_func_uint8_t_u_u((((((safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(l_324, 0x860AE518L)) >= l_40), l_324)), 0xD2L)) >= l_324) && g_160[0].f0.f5) > 1L) && l_314.f0), g_25[3].f5))) >= g_305[1][3][0])) > l_324) , g_335));
        l_337 = (-4L);
    }
    l_236 = (safe_mod_func_uint16_t_u_u(l_314.f2, (safe_mul_func_uint16_t_u_u(6UL, (((safe_rshift_func_uint8_t_u_u(l_344, ((safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((g_35 = (g_175 = l_7[1])), g_160[0].f1)), 1)) > l_7[0]))) || l_314.f1) != g_303)))));
    if ((safe_add_func_int64_t_s_s(((0x74E2L < (safe_sub_func_int16_t_s_s((l_353 , (safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_53.f0, (((((safe_mul_func_uint8_t_u_u(l_353.f0.f1, l_353.f0.f1)) <= l_314.f5) && (-1L)) > 1UL) <= g_24))), 1))), 0x8DC7L))) | g_263), 0x9774E2E9037DE91FLL)))
    { 
        uint8_t l_365[4] = {2UL,2UL,2UL,2UL};
        int32_t l_385[1][1];
        uint32_t l_391 = 0x6A16A43FL;
        int64_t l_395 = 0x2E58FC6E82A49DD9LL;
        int64_t l_398 = 0xF0DC2095D400788CLL;
        struct S0 l_412[1][4][3] = {{{{0L,0xD436E5EFCE0573BDLL,1L,0xF6AAA068L,1L,2L},{1L,0x187C855B13E08F95LL,6L,0x6B11AFE3L,0xFF35L,0xAD94F528L},{2L,0x6BCCA9EF88D4BEEDLL,-1L,0x8C6B1F42L,0xF754L,0xE041EA4DL}},{{0x97C9DD1EL,0x5CF4F576CC4F3EBBLL,-5L,0x5097597BL,-4L,0x33BD9D0BL},{1L,0x187C855B13E08F95LL,6L,0x6B11AFE3L,0xFF35L,0xAD94F528L},{0x97C9DD1EL,0x5CF4F576CC4F3EBBLL,-5L,0x5097597BL,-4L,0x33BD9D0BL}},{{0x3FAD1BD5L,0x57FD259BF9DE1A0BLL,0xCBL,1UL,1L,0x0E2FB11AL},{0L,0xD436E5EFCE0573BDLL,1L,0xF6AAA068L,1L,2L},{2L,0x6BCCA9EF88D4BEEDLL,-1L,0x8C6B1F42L,0xF754L,0xE041EA4DL}},{{0x3FAD1BD5L,0x57FD259BF9DE1A0BLL,0xCBL,1UL,1L,0x0E2FB11AL},{0x3FAD1BD5L,0x57FD259BF9DE1A0BLL,0xCBL,1UL,1L,0x0E2FB11AL},{0L,0xD436E5EFCE0573BDLL,1L,0xF6AAA068L,1L,2L}}}};
        int64_t l_421 = 1L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_385[i][j] = 0x96997B79L;
        }
        for (g_224 = 28; (g_224 == 50); ++g_224)
        { 
            uint16_t l_388 = 0xA8E7L;
        }
        l_399[0]--;
        if (((((safe_sub_func_uint8_t_u_u((((((g_160[0].f0.f4 || g_396) > (((safe_rshift_func_uint8_t_u_s(l_365[3], (safe_div_func_int8_t_s_s(l_398, 0x72L)))) <= l_365[1]) < g_66[0])) | g_198[1][2][0]) , l_408) > g_66[0]), l_7[1])) , 0x865AEAE5L) || g_160[0].f0.f1) , g_224))
        { 
            return g_303;
        }
        else
        { 
            uint16_t l_411 = 7UL;
            int32_t l_430[2][3][5] = {{{0x74CF1EF8L,0xEF92D749L,0x74CF1EF8L,0xEF92D749L,0x74CF1EF8L},{0xD03C9111L,0xD03C9111L,0xD03C9111L,0xD03C9111L,0xD03C9111L},{0x74CF1EF8L,0xEF92D749L,0x74CF1EF8L,0xEF92D749L,0x74CF1EF8L}},{{0xD03C9111L,0xD03C9111L,0xD03C9111L,0xD03C9111L,0xD03C9111L},{0x74CF1EF8L,0xEF92D749L,0x74CF1EF8L,0xEF92D749L,0x74CF1EF8L},{0xD03C9111L,0xD03C9111L,0xD03C9111L,0xD03C9111L,0xD03C9111L}}};
            int i, j, k;
            for (l_397 = 9; (l_397 != 25); l_397 = safe_add_func_uint64_t_u_u(l_397, 8))
            { 
                uint8_t l_420[4] = {255UL,255UL,255UL,255UL};
                int32_t l_429 = 0x2D0AE6A2L;
                int i;
                l_421 |= (((l_411 & (l_412[0][3][1] , ((!((safe_lshift_func_uint8_t_u_u((((((g_33 = (safe_lshift_func_int8_t_s_u((l_353.f3 == (safe_mul_func_uint8_t_u_u(0UL, g_60))), g_160[0].f0.f1))) >= g_160[0].f0.f5) < 0L) < l_411) ^ g_305[0][0][0]), l_314.f3)) , 0xEAC1L)) > l_314.f0))) && l_411) , l_420[2]);
                l_430[1][1][4] = (l_429 = (safe_add_func_uint64_t_u_u((l_236 = ((safe_add_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s((0x33CE3634L || g_25[3].f4), l_428)) < 18446744073709551611UL) & g_25[3].f0) && g_25[3].f4), 4UL)) | g_244[0])), l_314.f3)));
            }
        }
    }
    else
    { 
        int16_t l_433 = (-3L);
        union U1 l_445[4][4] = {{{{1L,8UL,0x9DL,0xAEC21FAFL,0x5D8AL,0x2229E3DFL}},{{-1L,0xDD7ABAE8BA9BF633LL,0x73L,1UL,0xC5E9L,0x970DCF15L}},{{1L,8UL,0x9DL,0xAEC21FAFL,0x5D8AL,0x2229E3DFL}},{{1L,8UL,0x9DL,0xAEC21FAFL,0x5D8AL,0x2229E3DFL}}},{{{-1L,0xDD7ABAE8BA9BF633LL,0x73L,1UL,0xC5E9L,0x970DCF15L}},{{-1L,0xDD7ABAE8BA9BF633LL,0x73L,1UL,0xC5E9L,0x970DCF15L}},{{0xF0EED4F9L,0x5ED67904A97B9DABLL,0x54L,0UL,0xC63CL,0xC6834EA3L}},{{-1L,0xDD7ABAE8BA9BF633LL,0x73L,1UL,0xC5E9L,0x970DCF15L}}},{{{-1L,0xDD7ABAE8BA9BF633LL,0x73L,1UL,0xC5E9L,0x970DCF15L}},{{1L,8UL,0x9DL,0xAEC21FAFL,0x5D8AL,0x2229E3DFL}},{{1L,8UL,0x9DL,0xAEC21FAFL,0x5D8AL,0x2229E3DFL}},{{-1L,0xDD7ABAE8BA9BF633LL,0x73L,1UL,0xC5E9L,0x970DCF15L}}},{{{1L,8UL,0x9DL,0xAEC21FAFL,0x5D8AL,0x2229E3DFL}},{{-1L,0xDD7ABAE8BA9BF633LL,0x73L,1UL,0xC5E9L,0x970DCF15L}},{{1L,8UL,0x9DL,0xAEC21FAFL,0x5D8AL,0x2229E3DFL}},{{1L,8UL,0x9DL,0xAEC21FAFL,0x5D8AL,0x2229E3DFL}}}};
        int32_t l_462 = 0xE95BD41BL;
        int32_t l_463[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_463[i] = 0xA77814C4L;
        for (g_396 = 0; (g_396 <= 2); g_396 += 1)
        { 
            int32_t l_435[3];
            int i;
            for (i = 0; i < 3; i++)
                l_435[i] = 0x6F23CDF8L;
            g_66[0] = (g_25[3].f1 | (safe_add_func_uint64_t_u_u(((((-2L) > (l_433 == (safe_unary_minus_func_uint8_t_u(((g_25[3].f5 == 0x80L) | g_224))))) && 0L) | l_435[2]), l_435[1])));
            l_353.f1 = g_263;
            for (l_353.f0.f3 = 0; (l_353.f0.f3 <= 0); l_353.f0.f3 += 1)
            { 
                int32_t l_436[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_436[i][j] = 0x8D70E6E5L;
                }
                return l_436[0][0];
            }
        }
        if ((safe_mul_func_int8_t_s_s((~(safe_div_func_int64_t_s_s(((g_160[0].f3 , ((((safe_rshift_func_uint8_t_u_s((!((l_445[1][2] , (l_445[1][2].f0.f5 = (safe_sub_func_int8_t_s_s((g_23 ^= (l_314.f5 &= g_303)), (safe_mul_func_int8_t_s_s(((1L || g_305[0][0][0]) < (-7L)), g_25[3].f2)))))) && g_244[0])), g_175)) | g_160[0].f3) , 0x14L) && g_23)) <= 7L), l_383))), g_25[3].f3)))
        { 
            uint16_t l_459 = 4UL;
            for (l_353.f1 = 0; (l_353.f1 <= 2); l_353.f1 += 1)
            { 
                int64_t l_460 = 0xC3403F91CBBC9061LL;
                g_66[0] = (((l_450 == (((g_243 = 0xADL) == ((l_445[1][2].f0.f4 == (safe_mul_func_uint8_t_u_u((((((safe_add_func_int16_t_s_s((((safe_sub_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_s(g_32, 1)) , g_22) & 0L), 0x95CDC0DCA3F76A08LL)) & 0xDDL) == g_244[2]), l_445[1][2].f0.f0)) | l_445[1][2].f0.f5) != 0xFE64E5E3L) != l_450) != g_160[0].f0.f5), l_450))) != 0xA9258507L)) & l_433)) != l_459) != l_460);
                if (g_32)
                    break;
                g_25[3].f5 = (l_460 & g_25[3].f0);
            }
        }
        else
        { 
            return l_445[1][2].f2;
        }
        --l_464;
    }
    return g_243;
}



static uint64_t  func_4(const int32_t  p_5, uint64_t  p_6)
{ 
    int32_t l_171 = (-1L);
    int32_t l_173 = 1L;
    int32_t l_178 = 1L;
    int32_t l_179 = 0x98A8AD46L;
    int32_t l_180 = 0x98E6FB31L;
    int32_t l_181[5][5] = {{0x35F5214CL,0xE6F0F2A3L,0x35F5214CL,0xE6F0F2A3L,0x35F5214CL},{0x30A8251EL,0x30A8251EL,0x30A8251EL,0x30A8251EL,0x30A8251EL},{0x35F5214CL,0xE6F0F2A3L,0x35F5214CL,0xE6F0F2A3L,0x35F5214CL},{0x30A8251EL,0x30A8251EL,0x30A8251EL,0x30A8251EL,0x30A8251EL},{0x35F5214CL,0xE6F0F2A3L,0x35F5214CL,0xE6F0F2A3L,0x35F5214CL}};
    int16_t l_182 = 7L;
    int32_t l_183 = 0xDAA861DAL;
    uint8_t l_184 = 1UL;
    int i, j;
    for (g_22 = (-18); (g_22 <= 12); ++g_22)
    { 
        int8_t l_172 = 1L;
        int32_t l_174[5][1] = {{0x6B1452D1L},{0xADECF76FL},{0x6B1452D1L},{0xADECF76FL},{0x6B1452D1L}};
        int i, j;
        g_66[0] = (253UL <= p_6);
        ++g_175;
    }
    --l_184;
    return g_160[0].f0.f0;
}



static uint64_t  func_8(int64_t  p_9, int64_t  p_10, const uint32_t  p_11, int32_t  p_12, uint16_t  p_13)
{ 
    int16_t l_44 = 1L;
    int32_t l_45 = 0x793EB104L;
    uint8_t l_46 = 0xE1L;
    int32_t l_69 = 0xE3D98491L;
    int32_t l_70[5][5][5] = {{{(-1L),0L,0L,(-1L),0x01DDD0F9L},{0x3893D913L,0x01DDD0F9L,(-10L),0xD67DEC96L,(-2L)},{0x71955992L,3L,(-7L),(-1L),(-10L)},{0x9C75CA1DL,(-10L),0x3893D913L,(-5L),(-4L)},{0x12A80D85L,(-10L),1L,0x71955992L,0x71955992L}},{{0x12A80D85L,1L,0x12A80D85L,0xA311AD49L,1L},{0x9C75CA1DL,0x12A80D85L,0xD67DEC96L,(-10L),(-1L)},{0x71955992L,0L,1L,0L,0L},{0x3893D913L,1L,0xD67DEC96L,(-1L),(-8L)},{(-1L),1L,0x12A80D85L,(-10L),1L}},{{(-5L),(-4L),1L,(-1L),1L},{0xA311AD49L,0xA311AD49L,0x3893D913L,0x4EAF162BL,(-8L)},{(-1L),0x4EAF162BL,(-7L),0x9C75CA1DL,0L},{3L,0x13AB5F77L,(-10L),1L,(-1L)},{(-10L),0x4EAF162BL,0L,(-7L),1L}},{{0L,0xA311AD49L,0x9C75CA1DL,(-2L),0x71955992L},{(-1L),(-10L),0L,0L,(-10L)},{1L,0x12A80D85L,0xA311AD49L,1L,(-8L)},{0x3893D913L,0x13AB5F77L,1L,0x12A80D85L,0L},{0L,(-1L),0xEB95E994L,0x71955992L,0x3893D913L}},{{0x3893D913L,0L,(-1L),3L,(-10L)},{1L,(-2L),(-10L),(-1L),1L},{(-1L),(-8L),(-10L),(-8L),(-1L)},{(-1L),0xD67DEC96L,(-1L),(-7L),(-1L)},{(-8L),(-4L),0xEB95E994L,0x01DDD0F9L,0L}}};
    uint32_t l_72 = 18446744073709551615UL;
    int64_t l_110[4][2] = {{0x95C9911E249038C8LL,0x95C9911E249038C8LL},{0x95C9911E249038C8LL,0x95C9911E249038C8LL},{0x95C9911E249038C8LL,0x95C9911E249038C8LL},{0x95C9911E249038C8LL,0x95C9911E249038C8LL}};
    int8_t l_123 = 0x75L;
    union U1 l_165[2] = {{{-5L,0x14431040AB6DAC16LL,2L,0x26855CD5L,0x4474L,-4L}},{{-5L,0x14431040AB6DAC16LL,2L,0x26855CD5L,0x4474L,-4L}}};
    uint16_t l_168 = 8UL;
    int i, j, k;
    for (p_9 = (-25); (p_9 == 10); ++p_9)
    { 
        int64_t l_43 = 0xDC2CBFFAEF1792F5LL;
        int32_t l_49 = 0L;
        int32_t l_111 = 0xC455A66CL;
        int32_t l_112 = (-10L);
        int32_t l_113 = 0L;
        int32_t l_115 = (-1L);
        int32_t l_117 = 0x4AD72E2DL;
        int32_t l_118 = 0x837D7957L;
        int32_t l_119 = 5L;
        int32_t l_121 = 0xB5EF69CAL;
        int32_t l_124[5][4][5] = {{{(-1L),8L,0xDA1A820CL,0x65101407L,1L},{(-7L),0x9EA80ACBL,0x65101407L,0x4EB65092L,0x0F03099FL},{0x08F1FC70L,(-1L),0x9EA80ACBL,0xABFE3370L,3L},{0L,(-1L),0x6304C604L,(-1L),0L}},{{(-4L),0x9EA80ACBL,0x0F03099FL,0x5BB39443L,0L},{0L,8L,(-1L),1L,0x84B49FC3L},{0x65101407L,0x19AB705BL,3L,0x9EA80ACBL,0L},{0x509578A6L,1L,0xABFE3370L,(-10L),0L}},{{0L,0L,0xE2E08AAFL,(-1L),3L},{1L,0x0F03099FL,0xE2E08AAFL,0xE2E08AAFL,0x0F03099FL},{0xE64651C7L,(-7L),0xABFE3370L,0x19AB705BL,1L},{0x19AB705BL,(-1L),3L,3L,(-1L)}},{{0x0F03099FL,3L,(-1L),0L,(-4L)},{0x19AB705BL,(-10L),0x0F03099FL,(-7L),3L},{0xE64651C7L,(-7L),0x6304C604L,1L,(-1L)},{1L,0xDA1A820CL,0x9EA80ACBL,1L,0x9EA80ACBL}},{{0L,0L,0x65101407L,(-7L),1L},{0x509578A6L,0xABFE3370L,0xDA1A820CL,0L,0xE64651C7L},{0x65101407L,1L,0x4EB65092L,3L,0x5BB39443L},{0L,0xABFE3370L,(-7L),0x19AB705BL,0x509578A6L}}};
        uint16_t l_126[2][3][3] = {{{0x6344L,0x6344L,0x6344L},{65535UL,65535UL,65535UL},{0x6344L,0x6344L,0x6344L}},{{65535UL,65535UL,65535UL},{0x6344L,0x6344L,0x6344L},{65535UL,65535UL,65535UL}}};
        int i, j, k;
        l_46++;
        l_49 = 0x11945B4EL;
        if ((safe_add_func_uint64_t_u_u((safe_unary_minus_func_int64_t_s((-1L))), (p_9 > ((g_53 , (g_35 = (~l_45))) == l_43)))))
        { 
            int8_t l_64 = 0x86L;
            int32_t l_65 = 0xE7A216D7L;
            int32_t l_67 = 0xEBF99C48L;
            if (((safe_mul_func_int8_t_s_s(g_23, ((safe_div_func_uint64_t_u_u((((((((~(g_60 = 0x9AC07F4C733F7CFELL)) , ((((((safe_unary_minus_func_uint64_t_u((safe_sub_func_int16_t_s_s(l_64, (((l_45 = (((g_24 ^= (l_44 < 0x2200L)) < g_14[0][2]) != g_25[3].f2)) || g_25[3].f4) != 0xC6L))))) || l_64) <= 0x48L) , 0xA2E7C99AL) , g_25[3].f0) != g_25[3].f0)) , l_46) == 0xF712L) ^ p_12) , 65527UL) & (-1L)), 0x4E13FEA38A5BFF83LL)) >= p_9))) , p_9))
            { 
                int32_t l_68 = 5L;
                int32_t l_71 = 0x96EB75E0L;
                l_72--;
            }
            else
            { 
                if (p_13)
                    break;
            }
        }
        else
        { 
            int64_t l_79 = 0x22B3A2D95A02EA27LL;
            union U2 l_82 = {0xB99E5BE9L};
            int32_t l_85 = 1L;
            int32_t l_86 = 0x063CD606L;
            int16_t l_106 = (-1L);
            int32_t l_114 = 1L;
            int32_t l_116 = 0xAD51B32BL;
            int64_t l_120[2][1];
            int32_t l_122 = (-1L);
            int32_t l_125[1];
            union U1 l_141 = {{0L,0x93CDE94898853A53LL,0L,0x3A6F3299L,-4L,0xA6B16CC9L}};
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_120[i][j] = 0x37086DD7F6879DC8LL;
            }
            for (i = 0; i < 1; i++)
                l_125[i] = 1L;
            if ((l_86 = ((((((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((g_60 , (g_14[0][1]--)), (l_85 = (l_82 , ((safe_rshift_func_uint8_t_u_s((l_82.f1 | (l_44 & g_25[3].f5)), l_44)) ^ p_12))))), p_12)) < (-9L)) , l_79) || l_46) && p_12) ^ 0xE431CF78B72995F5LL)))
            { 
                uint32_t l_95 = 0x1642D9A1L;
                int32_t l_96 = 0x39857A52L;
                l_96 = ((0x0BF8L <= (safe_lshift_func_int8_t_s_u(g_53.f0, 1))) && (safe_mul_func_int16_t_s_s((((l_79 <= (safe_sub_func_int8_t_s_s((l_95 = (g_25[3].f2 = ((((safe_mod_func_int8_t_s_s((l_86 = 1L), g_66[0])) > 1L) ^ l_69) , l_44))), g_25[3].f3))) || g_25[3].f1) < l_49), l_85)));
                return p_12;
            }
            else
            { 
                int8_t l_107 = 9L;
                int32_t l_108 = 1L;
                int32_t l_109[2][4][4] = {{{0L,(-9L),0L,1L},{0L,0L,0L,(-1L)},{(-9L),1L,(-1L),(-1L)},{0L,0L,(-3L),1L}},{{1L,0L,0L,0L},{0xAFF3DC6DL,1L,(-3L),0L},{0L,1L,1L,0L},{1L,0L,0xAFF3DC6DL,(-1L)}}};
                int i, j, k;
                l_85 = ((safe_div_func_uint32_t_u_u((0x4A349480F4B2D4C7LL | (safe_mod_func_int32_t_s_s(0x77C73169L, ((safe_rshift_func_int8_t_s_s((~(((safe_add_func_int16_t_s_s(((g_14[0][1] &= l_106) , l_107), g_24)) != l_107) < 0xAEC37504L)), g_33)) && 0x16DD76C8L)))), 0xD93E5480L)) && g_53.f0);
                ++l_126[0][2][1];
                g_25[3].f5 = ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((l_109[1][2][3] = (++g_14[0][0])), (l_106 , (safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(1UL, ((0x76L || ((l_141 , l_141.f0.f5) != l_125[0])) < p_11))) < p_10), 0xB098A2B63D32DC01LL)), g_25[3].f1))))), g_24)) ^ g_25[3].f5);
            }
            for (l_112 = 0; (l_112 >= 27); l_112 = safe_add_func_uint8_t_u_u(l_112, 8))
            { 
                uint32_t l_152 = 0xD9C52FCFL;
                g_66[0] ^= (safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s(p_12, g_25[3].f2)), ((safe_lshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((p_12 ^ (0xDE1B00A8BA1B3545LL | p_13)), l_113)) != p_9), p_13)) <= g_25[3].f0)));
                --l_152;
            }
            for (l_114 = 0; (l_114 != 17); l_114++)
            { 
                uint64_t l_157[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_157[i][j] = 18446744073709551615UL;
                }
                --l_157[0][0];
            }
        }
    }
    g_25[3].f5 ^= (l_110[3][1] == (g_160[0] , (safe_lshift_func_int16_t_s_u((!(~((l_165[1] , (safe_sub_func_uint64_t_u_u((l_168 <= 0L), l_165[1].f3))) <= l_123))), l_165[1].f2))));
    return l_165[1].f0.f5;
}



static int64_t  func_15(int32_t  p_16, struct S0  p_17, int32_t  p_18, const uint32_t  p_19)
{ 
    int64_t l_26 = 0xADC705BE734E2E0FLL;
    int32_t l_27 = 0x0DC4B636L;
    int32_t l_28 = 0L;
    int32_t l_29 = 1L;
    int32_t l_30 = 0xAED0F12AL;
    int32_t l_31 = 4L;
    int32_t l_34[3];
    int i;
    for (i = 0; i < 3; i++)
        l_34[i] = 0xC7A429ADL;
    g_35--;
    g_25[3].f5 = (safe_sub_func_int32_t_s_s(((((p_18 <= (0x09E6L < ((g_24 ^= 0x487C7592L) && ((p_17.f2 , 0x3335A02A909F00F3LL) | p_17.f1)))) <= (-1L)) ^ g_25[3].f5) != p_17.f0), g_32));
    return g_25[3].f4;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_14[i][j], "g_14[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_25[i].f0, "g_25[i].f0", print_hash_value);
        transparent_crc(g_25[i].f1, "g_25[i].f1", print_hash_value);
        transparent_crc(g_25[i].f2, "g_25[i].f2", print_hash_value);
        transparent_crc(g_25[i].f3, "g_25[i].f3", print_hash_value);
        transparent_crc(g_25[i].f4, "g_25[i].f4", print_hash_value);
        transparent_crc(g_25[i].f5, "g_25[i].f5", print_hash_value);

    }
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_53.f0, "g_53.f0", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_160[i].f0.f0, "g_160[i].f0.f0", print_hash_value);
        transparent_crc(g_160[i].f0.f1, "g_160[i].f0.f1", print_hash_value);
        transparent_crc(g_160[i].f0.f2, "g_160[i].f0.f2", print_hash_value);
        transparent_crc(g_160[i].f0.f3, "g_160[i].f0.f3", print_hash_value);
        transparent_crc(g_160[i].f0.f4, "g_160[i].f0.f4", print_hash_value);
        transparent_crc(g_160[i].f0.f5, "g_160[i].f0.f5", print_hash_value);
        transparent_crc(g_160[i].f1, "g_160[i].f1", print_hash_value);
        transparent_crc(g_160[i].f2, "g_160[i].f2", print_hash_value);
        transparent_crc(g_160[i].f3, "g_160[i].f3", print_hash_value);

    }
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_192.f0, "g_192.f0", print_hash_value);
    transparent_crc(g_192.f1, "g_192.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_198[i][j][k], "g_198[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_244[i], "g_244[i]", print_hash_value);

    }
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_305[i][j][k], "g_305[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
