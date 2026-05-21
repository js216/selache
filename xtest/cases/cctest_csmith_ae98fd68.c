// SPDX-License-Identifier: MIT
// cctest_csmith_ae98fd68.c --- cctest case csmith_ae98fd68 (csmith seed 2929261928)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfb684d2f */

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

// Options:   -s 2929261928 -o /tmp/csmith_gen_fymp8i7y/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int32_t  f0;
};

struct S1 {
   uint64_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int32_t  f0;
};
#pragma pack(pop)

struct S3 {
   int16_t  f0;
   int32_t  f1;
};

union U4 {
   struct S2  f0;
   int8_t  f1;
};


static struct S3 g_6 = {0x4888L,3L};
static int16_t g_26 = (-4L);
static int32_t g_28 = (-10L);
static int64_t g_36 = 0x4DB2A93F04518073LL;
static uint32_t g_54 = 0xF20CF680L;
static struct S2 g_57[5][3][1] = {{{{-1L}},{{0x5F1D345DL}},{{3L}}},{{{3L}},{{0x5F1D345DL}},{{-1L}}},{{{0xBC4A6B1FL}},{{-1L}},{{0x5F1D345DL}}},{{{3L}},{{3L}},{{0x5F1D345DL}}},{{{-1L}},{{0xBC4A6B1FL}},{{-1L}}}};
static uint32_t g_60 = 0x52E9AD70L;
static struct S1 g_64 = {0x60B10F657D2A19D8LL};
static uint16_t g_94 = 0xA393L;
static int32_t g_95 = 0L;
static struct S3 g_110 = {0xBBDFL,0xC5FA4B2AL};
static uint32_t g_118 = 4294967292UL;



static uint32_t  func_1(void);
static int8_t  func_4(struct S3  p_5);
static struct S2  func_10(int32_t  p_11, int16_t  p_12, int64_t  p_13, uint8_t  p_14);
static const struct S2  func_15(uint16_t  p_16, int32_t  p_17, struct S2  p_18);




static uint32_t  func_1(void)
{ 
    g_57[0][1][0].f0 = (safe_rshift_func_int8_t_s_u(func_4(g_6), 3));
    return g_6.f0;
}



static int8_t  func_4(struct S3  p_5)
{ 
    uint16_t l_9[4][5][1] = {{{0xC25BL},{0x9C63L},{0x9C63L},{0xC25BL},{0x9C63L}},{{0x9C63L},{0xC25BL},{0x9C63L},{0x9C63L},{0xC25BL}},{{0x9C63L},{0x9C63L},{0xC25BL},{0x9C63L},{0x9C63L}},{{0xC25BL},{0x9C63L},{0x9C63L},{0xC25BL},{0x9C63L}}};
    int32_t l_27 = 1L;
    int32_t l_29[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_29[i] = 0x17216709L;
    for (p_5.f1 = 28; (p_5.f1 > 0); p_5.f1 = safe_sub_func_uint64_t_u_u(p_5.f1, 9))
    { 
        uint32_t l_31 = 0x8E5161E3L;
        int32_t l_37 = 0L;
        struct S2 l_38[4] = {{0xCC114FF6L},{0xCC114FF6L},{0xCC114FF6L},{0xCC114FF6L}};
        int i;
        for (p_5.f0 = 0; (p_5.f0 <= 0); p_5.f0 += 1)
        { 
            int64_t l_79[3][5][4] = {{{(-7L),0x60AD585B88FC9099LL,(-7L),(-4L)},{1L,0x60AD585B88FC9099LL,0xBD83FE2F772B8ADFLL,(-4L)},{(-7L),0x33AA3A0A77380A6ALL,0xBD83FE2F772B8ADFLL,(-4L)},{0xBD83FE2F772B8ADFLL,(-4L),0xBD83FE2F772B8ADFLL,0x33AA3A0A77380A6ALL},{(-7L),(-4L),1L,(-4L)}},{{(-7L),0x33AA3A0A77380A6ALL,0xBD83FE2F772B8ADFLL,(-4L)},{0xBD83FE2F772B8ADFLL,(-4L),0xBD83FE2F772B8ADFLL,0x33AA3A0A77380A6ALL},{(-7L),(-4L),1L,(-4L)},{(-7L),0x33AA3A0A77380A6ALL,0xBD83FE2F772B8ADFLL,(-4L)},{0xBD83FE2F772B8ADFLL,(-4L),0xBD83FE2F772B8ADFLL,0x33AA3A0A77380A6ALL}},{{(-7L),(-4L),1L,(-4L)},{(-7L),0x33AA3A0A77380A6ALL,0xBD83FE2F772B8ADFLL,(-4L)},{0xBD83FE2F772B8ADFLL,(-4L),0xBD83FE2F772B8ADFLL,0x33AA3A0A77380A6ALL},{(-7L),(-4L),1L,(-4L)},{(-7L),0x33AA3A0A77380A6ALL,0xBD83FE2F772B8ADFLL,(-4L)}}};
            int32_t l_80 = 0xE56265DCL;
            int i, j, k;
            for (g_6.f0 = 0; (g_6.f0 <= 0); g_6.f0 += 1)
            { 
                int32_t l_30 = 0xC214F163L;
                int i, j, k;
                l_38[2] = func_10((l_79[2][1][3] = (func_15(l_9[(g_6.f0 + 3)][(g_6.f0 + 3)][p_5.f0], (((safe_mul_func_int8_t_s_s((((l_37 ^= (safe_sub_func_uint16_t_u_u((!((g_6.f0 >= ((g_26 = (safe_lshift_func_uint8_t_u_u(((l_9[(g_6.f0 + 3)][(g_6.f0 + 3)][p_5.f0] , ((++l_31) & (((g_36 = ((l_30 = (safe_sub_func_uint32_t_u_u(((0xDF39F3C5A4A104ACLL == p_5.f1) , 0x6C5533F2L), 0x3D73C12DL))) , l_29[3])) & l_9[(g_6.f0 + 3)][(g_6.f0 + 3)][p_5.f0]) <= g_28))) != (-1L)), g_28))) == p_5.f0)) <= p_5.f0)), 0xB296L))) || p_5.f1) == p_5.f0), 0x8CL)) ^ p_5.f0) | 8L), l_38[2]) , g_26)), l_29[0], p_5.f0, l_80);
            }
            l_38[2].f0 = 0x0269B8F4L;
            --g_118;
        }
        for (g_64.f0 = 1; (g_64.f0 <= 4); g_64.f0 += 1)
        { 
            int i;
            l_29[g_64.f0] = l_29[g_64.f0];
        }
    }
    p_5 = g_6;
    return p_5.f1;
}



static struct S2  func_10(int32_t  p_11, int16_t  p_12, int64_t  p_13, uint8_t  p_14)
{ 
    uint8_t l_85 = 0x67L;
    int32_t l_86 = 0xF198232CL;
    int32_t l_92 = 0L;
    int32_t l_96[1][3];
    struct S3 l_106[1] = {{0x5D86L,0xFAEDDA49L}};
    int32_t l_111 = 0x493E9E3DL;
    const int8_t l_112 = (-1L);
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_96[i][j] = 0L;
    }
    for (g_36 = 0; (g_36 >= 0); g_36 -= 1)
    { 
        uint8_t l_93 = 1UL;
        struct S3 l_109[5] = {{0x7FA4L,0x77AA3FF9L},{0x7FA4L,0x77AA3FF9L},{0x7FA4L,0x77AA3FF9L},{0x7FA4L,0x77AA3FF9L},{0x7FA4L,0x77AA3FF9L}};
        int32_t l_113 = 0x34994D0EL;
        int i;
        l_96[0][1] = (safe_add_func_uint8_t_u_u(0x55L, (g_95 |= ((safe_sub_func_int8_t_s_s((l_86 = l_85), (g_94 &= ((safe_rshift_func_int8_t_s_u(((+0x205C77F51BCBD03FLL) ^ ((((safe_sub_func_int64_t_s_s(((l_92 = 0x577CL) || l_85), (-1L))) ^ g_57[0][1][0].f0) | g_64.f0) || g_57[0][1][0].f0)), 5)) , l_93)))) >= g_54))));
        for (p_13 = 0; (p_13 <= 0); p_13 += 1)
        { 
            int16_t l_97 = 0xA75AL;
            struct S3 l_114 = {1L,0x7CDB5522L};
            l_113 = ((l_97 | (((((((safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((l_111 = (((g_57[0][1][0] , (safe_mul_func_int16_t_s_s((l_106[0] , (safe_mul_func_uint8_t_u_u(((g_110 = (l_109[4] = g_6)) , l_97), l_86))), 0xFE07L))) || g_64.f0) , l_109[4].f1)), 1)), l_93)), l_93)) != (-1L)) ^ 0x7E7A5B98L) && 0x92C7L) && 0xFAA63A172F119E39LL) > l_112) ^ 0x4F6CL)) , 0L);
            for (g_60 = 0; (g_60 <= 0); g_60 += 1)
            { 
                uint8_t l_115 = 0xE1L;
                g_110 = l_114;
                --l_115;
            }
        }
    }
    return g_57[0][1][0];
}



static const struct S2  func_15(uint16_t  p_16, int32_t  p_17, struct S2  p_18)
{ 
    int32_t l_49 = 0x3C1DC0ACL;
    int32_t l_51 = 0x97C2923FL;
    struct S1 l_63 = {0UL};
    for (p_18.f0 = 0; (p_18.f0 > 15); ++p_18.f0)
    { 
        union U4 l_50 = {{0x8E434042L}};
        int8_t l_76 = 0x3DL;
        int8_t l_77[3][3][1] = {{{0x24L},{0x23L},{0x24L}},{{0x23L},{0x24L},{0x23L}},{{0x24L},{0x23L},{0x24L}}};
        int i, j, k;
        if ((safe_div_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u(0x89L, (safe_add_func_int8_t_s_s(((((safe_sub_func_uint8_t_u_u((l_49 = ((l_49 | (0x2AL <= (l_50 , l_49))) >= g_6.f0)), l_50.f1)) & l_51) | g_36) && l_51), l_50.f1)))) <= l_51) == l_50.f0.f0), 0x52L)))
        { 
            struct S2 l_58 = {0L};
            for (g_28 = (-25); (g_28 >= 17); g_28++)
            { 
                --g_54;
            }
            l_58 = g_57[0][1][0];
            if (p_18.f0)
                break;
        }
        else
        { 
            const struct S2 l_59[1] = {{0xA07078C3L}};
            int i;
            l_49 = (-1L);
            for (l_50.f0.f0 = 0; (l_50.f0.f0 <= 0); l_50.f0.f0 += 1)
            { 
                return l_59[0];
            }
        }
        l_51 = (-3L);
        for (g_54 = 0; (g_54 <= 0); g_54 += 1)
        { 
            int8_t l_67 = 4L;
            int32_t l_78[5][3][1] = {{{6L},{0xF13354A9L},{6L}},{{0xF13354A9L},{6L},{0xF13354A9L}},{{6L},{0xF13354A9L},{6L}},{{0xF13354A9L},{6L},{0xF13354A9L}},{{6L},{0xF13354A9L},{6L}}};
            int i, j, k;
            g_60++;
            g_64 = l_63;
            l_78[3][0][0] = (((((safe_mod_func_int32_t_s_s((((l_67 = 0x84030276420880F5LL) > g_57[0][1][0].f0) && ((safe_sub_func_uint64_t_u_u(0xE2E6445A0AE89175LL, (safe_sub_func_int8_t_s_s(((((((safe_mod_func_int8_t_s_s(((l_76 = g_64.f0) || p_16), g_60)) , g_54) < 0L) > g_60) < l_77[0][1][0]) < 0x09L), p_17)))) && p_16)), g_54)) | g_28) ^ p_18.f0) > 0x2F95L) || p_18.f0);
            for (g_36 = 0; (g_36 <= 0); g_36 += 1)
            { 
                return p_18;
            }
        }
    }
    return p_18;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    transparent_crc(g_6.f1, "g_6.f1", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_57[i][j][k].f0, "g_57[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_110.f0, "g_110.f0", print_hash_value);
    transparent_crc(g_110.f1, "g_110.f1", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
