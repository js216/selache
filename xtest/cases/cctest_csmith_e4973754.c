// SPDX-License-Identifier: MIT
// cctest_csmith_e4973754.c --- cctest case csmith_e4973754 (csmith seed 3835115348)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xeda223af */

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

// Options:   -s 3835115348 -o /tmp/csmith_gen_kipj0gtg/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int8_t  f0;
   uint8_t  f1;
   int64_t  f2;
};
#pragma pack(pop)

union U2 {
   uint32_t  f0;
   uint16_t  f1;
   int64_t  f2;
   int8_t  f3;
};

union U3 {
   uint8_t  f0;
   int8_t  f1;
   uint32_t  f2;
};


static int32_t g_4 = 0xB844A754L;
static uint8_t g_6 = 0x20L;
static int64_t g_10 = 0xD14CD49598AAF0A9LL;
static struct S0 g_36 = {0L};
static const union U3 g_42[4] = {{248UL},{248UL},{248UL},{248UL}};
static int32_t g_43 = (-1L);
static int8_t g_74 = 8L;
static int32_t g_75 = (-5L);
static uint8_t g_77 = 0x82L;
static uint32_t g_166 = 0x139C9446L;
static uint16_t g_177 = 0UL;
static struct S1 g_223[5][2][3] = {{{{-2L,0xDFL,-10L},{-2L,0xDFL,-10L},{3L,0x76L,0x05891831124197F7LL}},{{0x59L,0x15L,-2L},{0x59L,0x15L,-2L},{0xB8L,0x4DL,0xDA33BDD32EFA2A6CLL}}},{{{-2L,0xDFL,-10L},{-2L,0xDFL,-10L},{3L,0x76L,0x05891831124197F7LL}},{{0x59L,0x15L,-2L},{0x59L,0x15L,-2L},{0xB8L,0x4DL,0xDA33BDD32EFA2A6CLL}}},{{{-2L,0xDFL,-10L},{-2L,0xDFL,-10L},{3L,0x76L,0x05891831124197F7LL}},{{0x59L,0x15L,-2L},{0x59L,0x15L,-2L},{0xB8L,0x4DL,0xDA33BDD32EFA2A6CLL}}},{{{-2L,0xDFL,-10L},{-2L,0xDFL,-10L},{3L,0x76L,0x05891831124197F7LL}},{{0x59L,0x15L,-2L},{0x59L,0x15L,-2L},{0xB8L,0x4DL,0xDA33BDD32EFA2A6CLL}}},{{{-2L,0xDFL,-10L},{-2L,0xDFL,-10L},{3L,0x76L,0x05891831124197F7LL}},{{0x59L,0x15L,-2L},{0x59L,0x15L,-2L},{0xB8L,0x4DL,0xDA33BDD32EFA2A6CLL}}}};
static struct S0 g_232 = {0xC7L};
static const uint32_t g_241 = 0x154029CEL;
static int32_t g_251 = 0x2B50047DL;
static int8_t g_252[5] = {0x16L,0x16L,0x16L,0x16L,0x16L};
static int8_t g_253 = 0x41L;
static int16_t g_263[4][1] = {{3L},{3L},{3L},{3L}};
static int32_t g_264 = 0x507BA803L;
static uint16_t g_297 = 0xA6C6L;
static int32_t g_379 = (-1L);
static uint32_t g_393 = 0x367607D2L;
static uint32_t g_418[4] = {0UL,0UL,0UL,0UL};
static union U2 g_451 = {0UL};
static uint32_t g_549[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static int32_t g_559 = (-3L);
static uint16_t g_568[1][2] = {{0x3CC4L,0x3CC4L}};



static const uint32_t  func_1(void);
static uint64_t  func_13(int64_t  p_14);
static int32_t  func_25(uint16_t  p_26, uint32_t  p_27, int32_t  p_28);
static int32_t  func_31(int8_t  p_32, uint64_t  p_33);




static const uint32_t  func_1(void)
{ 
    uint16_t l_2 = 0x3C89L;
    int32_t l_9 = 0xC3203BD6L;
    struct S0 l_539 = {-1L};
    if (l_2)
    { 
        int32_t l_3 = 0x0AA6E6F7L;
        int64_t l_29 = 0xA4137D6C5051DD2ELL;
        struct S0 l_538 = {0x03L};
        int32_t l_548[1];
        int i;
        for (i = 0; i < 1; i++)
            l_548[i] = 0L;
        if (l_3)
        { 
            return l_3;
        }
        else
        { 
            int8_t l_5 = 0L;
            l_9 = (g_4 > ((++g_6) | 0xAB1943C6FE23A266LL));
        }
lbl_530:
        g_10 |= g_4;
        if ((safe_div_func_uint32_t_u_u(((func_13((safe_div_func_uint16_t_u_u(g_6, (g_393 ^= (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_6, (l_9 = ((safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((5UL > ((func_25(l_29, l_2, l_9) , g_42[3].f1) < 5L)), l_29)) != 0xBC66L), l_2)) , 0xAF75L)))), l_3)))))) >= l_2) ^ l_29), g_253)))
        { 
            struct S1 l_531 = {0L,1UL,0x85567A7518A81A47LL};
            int32_t l_537 = 0L;
            for (l_2 = 0; (l_2 <= 3); l_2 += 1)
            { 
                uint8_t l_534[5] = {0xCFL,0xCFL,0xCFL,0xCFL,0xCFL};
                int i;
                if (l_3)
                    goto lbl_530;
                l_539 = (l_531 , (g_451 , (l_538 = ((((((safe_rshift_func_uint8_t_u_u((l_534[4] < (g_10 = (l_537 = (safe_add_func_uint8_t_u_u(0x8FL, 0xA9L))))), g_4)) & l_534[4]) ^ g_297) != g_74) > l_29) , g_36))));
            }
            if ((((4294967295UL & (l_3 || (safe_add_func_uint32_t_u_u(g_75, (g_43 &= ((safe_unary_minus_func_int16_t_s((safe_add_func_uint32_t_u_u((g_297 ^ 0x92A0066BL), l_531.f0)))) | l_539.f0)))))) && l_29) == g_264))
            { 
                uint32_t l_545 = 0UL;
                g_43 = g_6;
                ++l_545;
            }
            else
            { 
                if (g_232.f0)
                    goto lbl_530;
                return g_77;
            }
        }
        else
        { 
            g_549[0]--;
            g_75 &= 0x49FB5295L;
        }
    }
    else
    { 
        struct S0 l_552 = {0xE0L};
        uint64_t l_560 = 0UL;
        int32_t l_567[2][4];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_567[i][j] = 3L;
        }
        g_232 = (g_36 = (l_552 = l_552));
        if ((safe_mod_func_uint64_t_u_u(g_549[0], (-1L))))
        { 
            const uint64_t l_566[5][4] = {{0x6E975D905F723D67LL,0x6E975D905F723D67LL,1UL,1UL},{1UL,9UL,1UL,9UL},{0x6E975D905F723D67LL,0x93A681FD754C5A71LL,0x8040B7BD1C85215FLL,1UL},{9UL,0x93A681FD754C5A71LL,0x93A681FD754C5A71LL,9UL},{0x93A681FD754C5A71LL,9UL,0x6E975D905F723D67LL,1UL}};
            int i, j;
            if ((g_43 = (g_379 = ((g_263[3][0] & (safe_lshift_func_uint16_t_u_u(((g_36 = g_36) , (safe_mod_func_uint32_t_u_u(8UL, 1UL))), 13))) , g_42[3].f0))))
            { 
                int32_t l_563 = (-1L);
                ++l_560;
                l_563 = l_552.f0;
                l_563 = l_563;
            }
            else
            { 
                l_9 &= (safe_mul_func_uint8_t_u_u(l_566[2][2], 246UL));
            }
        }
        else
        { 
            g_568[0][1]++;
        }
    }
    l_539 = g_232;
    for (g_4 = 20; (g_4 >= (-1)); g_4 = safe_sub_func_int64_t_s_s(g_4, 8))
    { 
        uint64_t l_573 = 18446744073709551613UL;
        if (l_539.f0)
            break;
        l_573++;
        l_9 |= (1L != (((0xCCL || (safe_div_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((l_573 , (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(0x86L, 0x08L)), 2)), g_297))), 0xEA0F8AD3L)), g_241))) <= l_573) , l_573));
    }
    return l_539.f0;
}



static uint64_t  func_13(int64_t  p_14)
{ 
    uint32_t l_417[3][2][3] = {{{1UL,1UL,1UL},{0x848EFDDAL,18446744073709551612UL,0x848EFDDAL}},{{1UL,1UL,1UL},{0x848EFDDAL,18446744073709551612UL,0x848EFDDAL}},{{1UL,1UL,1UL},{0x848EFDDAL,18446744073709551612UL,0x848EFDDAL}}};
    int32_t l_419 = (-2L);
    int32_t l_439 = 0xDDAC24A8L;
    union U2 l_496 = {4294967295UL};
    int i, j, k;
    for (g_177 = 0; (g_177 > 14); g_177++)
    { 
        uint32_t l_396 = 0UL;
        int32_t l_426 = (-1L);
        int32_t l_487 = (-3L);
        struct S0 l_507[1] = {{1L}};
        int i;
        if ((p_14 > l_396))
        { 
            uint32_t l_397 = 0x08576735L;
            int32_t l_416 = 0xD528FEA0L;
            g_418[1] |= (g_43 |= (p_14 == ((p_14 , l_397) , (safe_add_func_uint8_t_u_u(((((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((l_416 = (g_77 &= ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(255UL, 0x55L)), g_223[3][0][0].f0)), 5)), l_396)) , 0UL))) != l_396), 13)), l_417[0][0][0])) <= g_379), g_251)), l_396)) == g_75) < g_263[2][0]) || p_14), l_397)))));
            l_419 = p_14;
            for (g_75 = (-21); (g_75 <= (-14)); g_75 = safe_add_func_int16_t_s_s(g_75, 8))
            { 
                return l_396;
            }
        }
        else
        { 
            int32_t l_433 = 0xF4F38DF0L;
            int32_t l_436 = 1L;
            uint32_t l_446 = 18446744073709551607UL;
            g_43 = (safe_div_func_uint8_t_u_u((g_223[3][0][0].f1 = l_396), p_14));
            g_75 |= (safe_add_func_int8_t_s_s((((l_426 |= p_14) , (((safe_sub_func_int16_t_s_s(((l_436 |= ((safe_mul_func_int8_t_s_s((l_426 = (safe_mod_func_uint64_t_u_u(g_297, l_433))), (safe_div_func_uint32_t_u_u((p_14 && l_433), g_232.f0)))) > l_433)) < g_253), g_252[4])) < (-10L)) , l_396)) , p_14), 0x01L));
            if ((p_14 || (safe_rshift_func_int8_t_s_u(l_439, 1))))
            { 
                uint16_t l_452 = 1UL;
                l_436 &= (l_452 ^= (safe_sub_func_uint32_t_u_u((g_418[3]--), (safe_sub_func_int32_t_s_s(((l_446 |= 1L) , (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s((g_451 , 0x06D6L), p_14)) >= p_14), 0))), g_6)))));
            }
            else
            { 
                uint64_t l_488 = 18446744073709551615UL;
                g_379 ^= (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((((safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((((l_488 |= (safe_lshift_func_int8_t_s_u(l_426, (g_6 & (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((++g_418[1]), (l_419 = (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_u((l_487 = ((((g_451.f1++) , (g_75 = 0x17077844L)) >= ((g_43 = (safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((g_10 == l_396), l_417[0][0][0])) & g_4), p_14))) && 4294967295UL)) & 0x4AL)), g_6)) >= 0xC4L) < p_14), 10)), p_14))))), p_14)))))) , 0UL) & g_264) < l_446), 3)), 13)), 6UL)) == (-10L)), p_14)), l_433)) >= 0x45L) == 8UL) >= p_14), 6L)), l_439));
            }
        }
        for (g_4 = 3; (g_4 >= 1); g_4 -= 1)
        { 
            int32_t l_497 = 0x8B27A03EL;
            int32_t l_500 = 0x13B58B0DL;
            int i;
            if ((g_43 = ((~(((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u((l_500 = (((safe_div_func_int16_t_s_s((l_496 , g_252[g_4]), (l_497 = l_396))) & (safe_mul_func_uint8_t_u_u((p_14 , p_14), p_14))) > 0UL)), 1L)) > g_241), 7)) <= 0xAD7CL) | p_14)) < g_252[g_4])))
            { 
                l_426 = 0xA5137B5AL;
                if (l_396)
                    continue;
            }
            else
            { 
                int8_t l_513[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_513[i] = 0L;
                l_419 = ((safe_rshift_func_uint16_t_u_u(0x6CFFL, (safe_mod_func_int16_t_s_s(g_252[4], g_252[g_4])))) , ((safe_rshift_func_uint16_t_u_s((l_507[0] , p_14), 6)) < g_451.f3));
                l_497 = (((safe_rshift_func_int16_t_s_s((((((((((((1L || (safe_sub_func_int32_t_s_s(((g_418[1] && ((l_497 ^ (~((l_426 = 0x86B9E0CDL) || l_439))) <= p_14)) != 1L), 1UL))) ^ 0x3117L) & g_232.f0) < 0x964795EDL) | g_252[3]) , l_496.f1) != l_513[0]) || g_42[3].f1) ^ 0x271C5CC861F6D0D2LL) < p_14) > l_417[0][0][0]), 5)) && p_14) == g_75);
            }
        }
    }
    if ((((((g_418[1] >= (-6L)) == (safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint16_t_u_s((l_496.f3 != (safe_mod_func_uint8_t_u_u(0UL, 0xA0L))), 5))))) >= p_14) | 0xBC1DL) != 18446744073709551615UL))
    { 
        return g_297;
    }
    else
    { 
        uint8_t l_529 = 0xDBL;
        for (g_166 = 3; (g_166 < 42); g_166++)
        { 
            return p_14;
        }
        g_75 = ((safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(l_529, g_177)), g_42[3].f1)) != p_14), 18446744073709551612UL)) == 255UL);
        g_379 = 6L;
    }
    return l_417[0][0][0];
}



static int32_t  func_25(uint16_t  p_26, uint32_t  p_27, int32_t  p_28)
{ 
    uint16_t l_30 = 65535UL;
    uint8_t l_37 = 0x39L;
    int32_t l_250 = 0L;
    int32_t l_255 = 1L;
    int32_t l_256 = 0xC6FEF38CL;
    uint64_t l_284 = 0x271CBBB26B008311LL;
    struct S0 l_293 = {7L};
    int32_t l_314 = 0L;
    if ((((g_6 == l_30) | func_31((((safe_sub_func_uint32_t_u_u((g_36 , (l_30 > l_30)), l_37)) | g_4) , l_37), g_4)) != g_223[3][0][0].f0))
    { 
        union U2 l_248 = {0x0267738EL};
        int32_t l_249 = (-6L);
        int32_t l_254 = 0x4B7CAA22L;
        int32_t l_257 = 0xEB34223EL;
        int32_t l_258 = (-1L);
        int32_t l_259 = 0x340F112FL;
        uint32_t l_260 = 0x32F4EEEBL;
        struct S0 l_296 = {-1L};
        uint64_t l_336 = 0xE5ED3885CE25C671LL;
        if (((safe_add_func_int64_t_s_s((l_249 = (l_248 , g_6)), (l_260++))) || ((((g_263[3][0] = g_223[3][0][0].f0) , 0x06F6L) < p_28) & g_264)))
        { 
            uint8_t l_271 = 3UL;
            int32_t l_289 = (-2L);
            uint64_t l_290 = 0x28B4F057894F7204LL;
            const struct S0 l_292 = {0x6AL};
            g_43 |= ((l_271 ^= (safe_mod_func_int64_t_s_s((l_257 ^= ((g_232 = g_232) , (l_249 ^= (safe_add_func_uint8_t_u_u(((l_250 = (255UL ^ (65528UL == ((((safe_mod_func_int8_t_s_s(p_26, g_75)) , 0x7351A84EL) && p_27) == g_75)))) , p_26), g_77))))), 0x94D96B292E38BFB4LL))) , g_6);
lbl_311:
            if ((safe_sub_func_int16_t_s_s(((g_251 > (safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(0xFDL, 7)) != (safe_add_func_uint8_t_u_u((p_26 ^ (safe_lshift_func_int16_t_s_s((l_250 = (l_284 == p_27)), g_42[3].f1))), l_249))), g_264)), p_28))) , l_271), p_26)))
            { 
                int32_t l_291 = 0xC9B642A0L;
                g_36 = ((((safe_mod_func_int16_t_s_s(((l_250 ^= (p_27 <= g_10)) || (p_26 >= (safe_lshift_func_int16_t_s_u((((l_289 = g_252[0]) ^ 1UL) || p_26), 15)))), l_290)) & l_256) < l_291) , l_292);
                l_249 = l_291;
                g_75 = (g_43 = ((4L & l_254) != 0xD3AF8A971ECD1750LL));
            }
            else
            { 
                l_289 = 0xF17608B0L;
                l_293 = g_232;
            }
            if ((l_256 = p_27))
            { 
                struct S0 l_295 = {0xCDL};
                int32_t l_310 = 6L;
                l_256 = ((~1UL) == p_26);
                l_296 = l_295;
                g_43 &= (g_223[3][0][0].f0 | ((((l_289 = (((g_297 <= (safe_mul_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((safe_div_func_int64_t_s_s(g_252[4], (safe_sub_func_uint8_t_u_u((0xC4D6030DAD6C18F8LL ^ 0UL), l_250)))), 5)) , g_241), 0x6A148877L)), 0xDABCL)) == p_27) , l_295.f0), g_251))) , g_6) <= l_310)) && 5UL) | l_254) && p_26));
            }
            else
            { 
                if (g_241)
                    goto lbl_311;
            }
        }
        else
        { 
            uint64_t l_315 = 8UL;
            for (l_260 = 0; (l_260 < 40); l_260 = safe_add_func_uint64_t_u_u(l_260, 5))
            { 
                uint16_t l_326 = 0x6F0BL;
                g_75 ^= 0x537B2DE8L;
                --l_315;
                l_326 = ((((safe_lshift_func_uint8_t_u_s(0xEFL, g_263[3][0])) & 0UL) > ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((((p_27 && p_27) > p_27) ^ 65535UL), g_75)), g_241)) >= p_26)) , 0xF551003BL);
            }
        }
        for (l_248.f3 = 0; (l_248.f3 <= 4); l_248.f3 += 1)
        { 
            int64_t l_333 = (-2L);
            int32_t l_335 = 0x2E4A64B0L;
            for (l_257 = 0; (l_257 <= 4); l_257 += 1)
            { 
                int32_t l_334[1];
                struct S0 l_337 = {0x9BL};
                int i;
                for (i = 0; i < 1; i++)
                    l_334[i] = 0x99F45685L;
                l_336 = (l_335 |= ((l_334[0] = (safe_mod_func_int32_t_s_s((g_252[l_248.f3] < ((((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((l_333 |= ((l_254 = g_36.f0) <= g_6)), 2)), 5)) && (p_26 > g_36.f0)) ^ g_264) > p_26) ^ g_166) , 1L)), 0xC3D86706L))) | p_27));
                if (g_241)
                    continue;
                l_337 = g_36;
            }
        }
        for (l_248.f2 = 29; (l_248.f2 >= (-16)); --l_248.f2)
        { 
            l_314 &= ((--g_223[3][0][0].f1) , ((safe_mul_func_int8_t_s_s(g_43, (~(safe_div_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(p_26, g_253)) , (safe_div_func_int32_t_s_s(l_258, 0x253BE1FAL))), 0x5558L))))) & 65534UL));
            g_232 = l_296;
        }
    }
    else
    { 
        uint32_t l_355 = 0x22146068L;
        int32_t l_356[5][4][3] = {{{0xE3A61933L,0x4B73F3D5L,0xC74853F6L},{0xD81AC170L,0x7B4E46D7L,0L},{1L,0xDE006D20L,0xDE006D20L},{0x5EF0559BL,(-1L),0x00C7D32CL}},{{0x5EF0559BL,0x00C7D32CL,0xD81AC170L},{1L,0x924D39F2L,0L},{0xD81AC170L,0xE3A61933L,0x8F321B60L},{0xE3A61933L,0x924D39F2L,(-7L)}},{{0x7B4E46D7L,0x00C7D32CL,0x7B4E46D7L},{0x924D39F2L,(-1L),0x7B4E46D7L},{0L,0xDE006D20L,(-7L)},{(-7L),0x7B4E46D7L,0x8F321B60L}},{{(-1L),0x4B73F3D5L,0L},{(-7L),0xF4191A83L,0xD81AC170L},{0L,0L,0x00C7D32CL},{0x924D39F2L,0L,0xDE006D20L}},{{0x7B4E46D7L,0xF4191A83L,0L},{0xE3A61933L,0x4B73F3D5L,0xC74853F6L},{0xD81AC170L,0x7B4E46D7L,0L},{1L,0xDE006D20L,0xDE006D20L}}};
        int i, j, k;
        l_314 = (1L | (safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((l_355 ^ (++g_223[3][0][0].f1)), g_252[4])) ^ (l_356[0][1][2] = 1UL)), l_355)));
        if ((safe_rshift_func_uint16_t_u_s(0x67C2L, ((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(0L, (safe_add_func_int8_t_s_s((p_27 || 0x8FFEAB3DL), 0L)))), g_42[3].f1)) != l_356[3][3][1]))))
        { 
            int64_t l_367 = 1L;
            return l_367;
        }
        else
        { 
            int64_t l_380[4][5] = {{0x301AFE7F203773B8LL,0x301AFE7F203773B8LL,1L,0x301AFE7F203773B8LL,0x301AFE7F203773B8LL},{0L,0x59260AA1E24365ADLL,0L,0L,0x59260AA1E24365ADLL},{0x301AFE7F203773B8LL,0x67486EB9614A238ALL,0x67486EB9614A238ALL,0x301AFE7F203773B8LL,0x67486EB9614A238ALL},{0x59260AA1E24365ADLL,0x59260AA1E24365ADLL,0L,0x59260AA1E24365ADLL,0x59260AA1E24365ADLL}};
            int32_t l_381 = 0x52B119D4L;
            int i, j;
            g_75 ^= (l_356[2][1][0] |= ((+p_27) && (255UL || (g_263[3][0] > ((safe_mod_func_int16_t_s_s((-4L), 1UL)) ^ p_28)))));
            if (((g_379 ^= (safe_lshift_func_int16_t_s_s((l_255 , (safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(1L, (((((((((9L > ((l_356[2][2][1] = p_26) >= l_284)) && l_356[1][0][0]) == 252UL) == (-3L)) >= p_27) ^ (-9L)) || g_36.f0) > (-3L)) <= p_28))), g_223[3][0][0].f2))), 4))) && l_284))
            { 
                l_293 = g_36;
            }
            else
            { 
                uint16_t l_382 = 0x11E0L;
                int32_t l_385 = 0x3505588FL;
                int32_t l_386 = 1L;
                l_382--;
                l_386 = ((l_385 = g_264) < g_42[3].f1);
                l_356[1][0][0] = (((safe_rshift_func_uint8_t_u_u((0xD3D4L | ((0UL >= (safe_rshift_func_uint16_t_u_s(l_356[0][1][2], 14))) <= g_223[3][0][0].f2)), l_314)) >= 246UL) , l_386);
            }
        }
        for (l_256 = 0; (l_256 < 17); l_256 = safe_add_func_int8_t_s_s(l_256, 8))
        { 
            return g_379;
        }
    }
    return l_314;
}



static int32_t  func_31(int8_t  p_32, uint64_t  p_33)
{ 
    int16_t l_59 = 0L;
    int32_t l_62 = 0x91BF520FL;
    int32_t l_76 = 8L;
    uint32_t l_139 = 0x10563AB8L;
    int32_t l_207[1];
    uint32_t l_222[2][4];
    int32_t l_245 = 0x92D3BF73L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_207[i] = 0L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_222[i][j] = 0xE6BB7537L;
    }
    g_43 &= (((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(18446744073709551606UL, (p_33 | p_32))) | (g_42[3] , 0x1731D497L)), 2)) && 0L) <= p_32);
    for (p_33 = 0; (p_33 <= 6); p_33 = safe_add_func_int16_t_s_s(p_33, 9))
    { 
        uint32_t l_58 = 4294967295UL;
        int32_t l_63 = 0x9B5F814DL;
        int64_t l_86[5];
        uint8_t l_87 = 0xE1L;
        struct S0 l_167[5][2][3] = {{{{0x33L},{-1L},{0x33L}},{{6L},{6L},{6L}}},{{{0x33L},{-1L},{0x33L}},{{6L},{6L},{6L}}},{{{0x33L},{-1L},{0x33L}},{{6L},{6L},{6L}}},{{{0x33L},{-1L},{0x33L}},{{6L},{6L},{6L}}},{{{0x33L},{-1L},{0x33L}},{{6L},{6L},{6L}}}};
        uint64_t l_206[4];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_86[i] = (-2L);
        for (i = 0; i < 4; i++)
            l_206[i] = 18446744073709551612UL;
        for (g_36.f0 = (-13); (g_36.f0 > 6); g_36.f0++)
        { 
            union U2 l_52 = {0x6153B72BL};
            g_43 ^= ((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_52 , ((l_63 = (safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((l_59 = (!l_58)), (((g_6 ^ (((safe_sub_func_uint32_t_u_u(0x92628F0FL, g_6)) > l_62) < 0xDEA6L)) <= l_52.f3) || 0x5F8E10B0L))), p_33))) & 0xF28F0E43L)), 0xD8E2DC66L)), 0x6EL)) < g_6);
            l_62 |= p_33;
            l_87 ^= ((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((p_33 ^ (safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((g_77++), (safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((l_63 & ((safe_mul_func_uint8_t_u_u(0xE6L, g_10)) , 4UL)), g_36.f0)), 5)))), g_36.f0))) == g_36.f0), p_33)) || g_42[3].f0), l_86[1])), p_33)) > 0xDEL);
        }
        if ((safe_sub_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(((p_32 = (l_76 |= (((safe_div_func_int32_t_s_s(((-8L) & (safe_sub_func_int16_t_s_s(0xD85EL, (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint16_t_u_s((3L < (safe_mod_func_uint8_t_u_u((l_63 = (safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(g_42[3].f1, l_62)) , 9UL), g_42[3].f1))), 0x05L))), 3))))))), 0x42BA5173L)) , g_6) , 0L))) || 1L), p_33)) & p_33) && l_86[1]), p_33)))
        { 
            uint32_t l_122 = 6UL;
            l_62 = (((safe_div_func_uint32_t_u_u((((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((((safe_mul_func_int8_t_s_s((g_36.f0 != p_33), (safe_mod_func_int64_t_s_s((~0xB4L), (g_10 = (safe_add_func_int8_t_s_s((l_63 ^= (((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_76, p_32)), p_33)) <= g_4) , p_32)), g_42[3].f1))))))) != g_77) , g_42[3].f1) ^ 0UL), g_74)), g_36.f0)) , l_122) || 0x5D0160B5L), p_32)) | (-7L)) != 0x6EL);
            for (g_43 = 3; (g_43 >= 1); g_43 -= 1)
            { 
                uint16_t l_123[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_123[i] = 0x3C0CL;
                l_123[0]--;
            }
            g_36 = g_36;
        }
        else
        { 
            uint32_t l_168 = 0x65D34479L;
            l_76 &= (g_166 |= ((safe_sub_func_uint32_t_u_u((1L != ((safe_lshift_func_int16_t_s_u(9L, 14)) , ((((safe_mod_func_int32_t_s_s(((((g_75 = (safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((~l_139), (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(0xF0L, g_4)), 0)), 0xB8D8L)) != 65535UL), l_58)), l_58)), p_33)), p_33)), 8)) & g_75) <= p_32) | g_10) & 1L), g_36.f0)), 0)), (-7L))) || g_75) == p_32) >= g_43), 18446744073709551609UL)), g_42[3].f1)))), 65529UL))) != 0x07C9B672L) , g_77) != 0UL), g_77)) < 3UL) < 0x5DL) || p_33))), p_33)) > p_33));
            if ((l_167[2][1][2] , l_168))
            { 
                uint16_t l_171[4] = {0x18D0L,0x18D0L,0x18D0L,0x18D0L};
                int32_t l_176[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_176[i] = 0L;
                l_176[1] = ((0x6CA1BE135CA447F7LL ^ (((safe_rshift_func_int16_t_s_u(g_42[3].f1, 13)) & (l_171[0] > ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_33, l_168)), 15)) >= l_168))) > l_86[1])) || 4294967291UL);
            }
            else
            { 
                union U2 l_180 = {0x7F728D9CL};
                int32_t l_183 = 0x917CCA84L;
                l_183 = ((g_177 = 0x5CE8A8DCL) < (safe_div_func_uint16_t_u_u((l_180 , (((safe_mul_func_int16_t_s_s(l_168, l_58)) & 9UL) == p_32)), p_33)));
            }
        }
        g_43 = (safe_mul_func_uint16_t_u_u(l_167[2][1][2].f0, (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((g_77 = (g_75 != (safe_sub_func_int8_t_s_s((g_36.f0 |= (l_62 = (p_32 & ((safe_sub_func_uint64_t_u_u(l_76, g_77)) >= 0x99E4605FL)))), g_166)))), g_74)), 14)), p_32)) <= p_32), l_206[2])), 5UL)), 7)), g_6))));
    }
    if (((((g_177++) , (((((safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((((((p_32 != ((l_76 = g_75) >= (p_32 , (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(0x9DL, g_74)) , p_32), p_33))))) , 0x4883662F39AA58BCLL) > p_32) >= l_222[1][3]) > g_6) <= l_222[1][3]) <= l_62), 1)), l_62)), p_33)), 0x0B0BE376L)) > l_62) < 0x173B2678477E6E7ELL) > p_33) ^ p_32)) >= l_207[0]) && 1L))
    { 
        uint64_t l_229 = 0xA83723A6807BAAA9LL;
        int32_t l_230 = 0xAA75BC96L;
        struct S0 l_231 = {0L};
        l_230 = (((((g_36.f0 = (((g_42[3] , g_223[3][0][0]) , (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((+(0xBAL && l_229)) != p_32), 7)), g_42[3].f0))) , l_222[1][3])) < l_62) , p_32) && p_33) <= l_207[0]);
        for (g_77 = 0; (g_77 <= 1); g_77 += 1)
        { 
            int64_t l_235 = 0xF1CC1EF98699A9D7LL;
            uint8_t l_242 = 252UL;
            for (g_74 = 0; (g_74 >= 0); g_74 -= 1)
            { 
                g_232 = l_231;
            }
            if (g_42[3].f0)
                continue;
            for (l_59 = 1; (l_59 >= 0); l_59 -= 1)
            { 
                union U2 l_238[1][3][4] = {{{{0UL},{0UL},{0x70F6C1F0L},{0UL}},{{0UL},{4294967295UL},{4294967295UL},{0UL}},{{4294967295UL},{0UL},{4294967295UL},{4294967295UL}}}};
                int32_t l_243[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_243[i] = 0L;
                g_43 |= ((safe_rshift_func_int8_t_s_u(l_222[l_59][(l_59 + 2)], g_42[3].f0)) > (g_177 |= (l_235 != ((((g_232.f0 < g_10) >= 0x6E28L) <= 0x86D91E2AL) || 1L))));
                l_243[0] = (((0L ^ ((p_32 <= ((((((l_230 = (((safe_mod_func_uint8_t_u_u(((((l_238[0][0][1] , ((safe_div_func_uint32_t_u_u((l_222[l_59][(l_59 + 1)] = ((((l_222[l_59][(l_59 + 2)] > l_238[0][0][1].f0) & p_33) > l_62) | (-1L))), g_241)) ^ g_42[3].f0)) < 1L) && 18446744073709551615UL) < l_231.f0), 254UL)) | 65527UL) & 0xC94FL)) == l_235) <= g_223[3][0][0].f2) & l_242) , p_33) , g_6)) && g_223[3][0][0].f2)) , g_42[3].f1) == l_139);
                if (l_222[1][3])
                    break;
            }
        }
    }
    else
    { 
        uint32_t l_244 = 18446744073709551613UL;
        return l_244;
    }
    return l_245;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_42[i].f0, "g_42[i].f0", print_hash_value);
        transparent_crc(g_42[i].f1, "g_42[i].f1", print_hash_value);

    }
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_223[i][j][k].f0, "g_223[i][j][k].f0", print_hash_value);
                transparent_crc(g_223[i][j][k].f1, "g_223[i][j][k].f1", print_hash_value);
                transparent_crc(g_223[i][j][k].f2, "g_223[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_232.f0, "g_232.f0", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_252[i], "g_252[i]", print_hash_value);

    }
    transparent_crc(g_253, "g_253", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_263[i][j], "g_263[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_418[i], "g_418[i]", print_hash_value);

    }
    transparent_crc(g_451.f1, "g_451.f1", print_hash_value);
    transparent_crc(g_451.f3, "g_451.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_549[i], "g_549[i]", print_hash_value);

    }
    transparent_crc(g_559, "g_559", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_568[i][j], "g_568[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
