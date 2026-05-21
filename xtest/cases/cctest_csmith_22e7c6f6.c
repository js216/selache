// SPDX-License-Identifier: MIT
// cctest_csmith_22e7c6f6.c --- cctest case csmith_22e7c6f6 (csmith seed 585615094)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x288c8c75 */

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

// Options:   -s 585615094 -o /tmp/csmith_gen_fvjzw09f/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   const int32_t  f1;
   const int32_t  f2;
   uint64_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   struct S1  f0;
   const int32_t  f1;
   const uint32_t  f2;
   struct S0  f3;
   struct S1  f4;
};
#pragma pack(pop)

struct S3 {
   struct S2  f0;
};

union U5 {
   const int32_t  f0;
   uint32_t  f1;
};

union U6 {
   const uint64_t  f0;
};

union U7 {
   uint32_t  f0;
   uint64_t  f1;
};


static uint16_t g_4 = 65535UL;
static uint8_t g_29 = 0xE2L;
static int32_t g_31 = 1L;
static union U5 g_61[1] = {{0xE384C83BL}};
static struct S1 g_62 = {0UL};
static uint32_t g_81 = 0x22DD2E1BL;
static uint32_t g_96 = 6UL;
static int8_t g_120 = 3L;
static uint32_t g_122 = 5UL;
static int16_t g_156[2] = {0x2234L,0x2234L};
static int32_t g_189 = 0L;
static union U6 g_193 = {0x81F5AF2B0C0EAC7FLL};
static struct S2 g_194 = {{18446744073709551614UL},0xFB422922L,4294967291UL,{0xAE24F212L,-4L,0xC62FD6A4L,0xC62504A518F3EDA6LL},{5UL}};
static int64_t g_202[4] = {0x63E790F2ED5B9905LL,0x63E790F2ED5B9905LL,0x63E790F2ED5B9905LL,0x63E790F2ED5B9905LL};
static int32_t g_203 = 0xA3F53AEDL;
static uint8_t g_208 = 0xECL;
static uint8_t g_216[2][5][1] = {{{0x88L},{246UL},{0x88L},{246UL},{0x88L}},{{246UL},{0x88L},{246UL},{0x88L},{246UL}}};
static uint16_t g_243 = 0x62BBL;
static int32_t g_253 = 0x10044AA3L;
static uint8_t g_254 = 1UL;



static struct S0  func_1(void);
static uint32_t  func_2(uint8_t  p_3);
static int16_t  func_7(union U5  p_8, uint8_t  p_9);
static union U5  func_10(int32_t  p_11, uint16_t  p_12, int32_t  p_13, uint32_t  p_14);




static struct S0  func_1(void)
{ 
    int32_t l_140[1][3][4];
    struct S0 l_150 = {1UL,-1L,0xC079A214L,18446744073709551606UL};
    int32_t l_178[5] = {0x748E4F8FL,0x748E4F8FL,0x748E4F8FL,0x748E4F8FL,0x748E4F8FL};
    uint8_t l_191 = 0x31L;
    uint32_t l_241[5];
    struct S1 l_244 = {0x0C5B0B88L};
    int32_t l_268 = (-1L);
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
                l_140[i][j][k] = (-6L);
        }
    }
    for (i = 0; i < 5; i++)
        l_241[i] = 0xB098A15BL;
    if (((((func_2(g_4) >= l_140[0][1][1]) , (+l_140[0][2][1])) ^ 0x6115L) , (-5L)))
    { 
        uint16_t l_143 = 0x0CBDL;
        int8_t l_154 = 1L;
        uint32_t l_179[3];
        int32_t l_190 = 0xAEF2F43CL;
        int i;
        for (i = 0; i < 3; i++)
            l_179[i] = 1UL;
        for (g_29 = 0; (g_29 <= 0); g_29 += 1)
        { 
            int16_t l_142 = (-3L);
            int32_t l_192 = 0xF1BF41CAL;
            for (g_120 = 0; (g_120 <= 0); g_120 += 1)
            { 
                uint32_t l_153[2];
                int32_t l_155[1];
                int i;
                for (i = 0; i < 2; i++)
                    l_153[i] = 1UL;
                for (i = 0; i < 1; i++)
                    l_155[i] = (-4L);
                l_143--;
                g_156[1] |= ((l_155[0] = ((safe_mod_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((((g_61[0].f0 , g_61[0]) , l_150) , (safe_mul_func_uint16_t_u_u((l_153[0] , 0x1316L), l_142))), l_154)) | l_150.f3), 0xDA282639L)) | g_31)) > 0xD1D32CE0L);
            }
            for (g_31 = 0; (g_31 >= 0); g_31 -= 1)
            { 
                uint32_t l_186[2][1];
                int32_t l_187 = 7L;
                int32_t l_188 = 0L;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_186[i][j] = 0xB2AF55E8L;
                }
                l_192 &= (safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_29, (((l_190 = ((((l_188 = (safe_lshift_func_int16_t_s_u(((l_178[4] = (!(safe_mod_func_uint64_t_u_u(l_150.f2, (l_187 = (safe_lshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((((safe_mul_func_int32_t_s_s(((--l_179[0]) >= (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((((((1UL > (0L == 0x9C9A99D2L)) ^ 0x78F7L) , g_4) >= 0xA92F95BFL) == (-1L)) <= l_154), 3)), l_178[0]))), 0L)) <= 1L) <= g_62.f0) == 1UL), 4)), l_186[1][0])), l_142))))))) <= g_81), l_186[1][0]))) >= l_186[1][0]) & 0xABL) >= g_189)) ^ g_31) & l_191))), g_156[1])), 0x04L)) | g_189), 0x8E77CFBDL));
            }
        }
    }
    else
    { 
        int8_t l_199 = 6L;
        if (((g_193 , (g_194 , (safe_mul_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(0xB0L, 2)) != 5UL) , g_4), l_199)))) | g_194.f1))
        { 
            uint8_t l_204 = 0xE6L;
            int8_t l_211 = 0xE9L;
            if ((safe_add_func_uint64_t_u_u(0xAC92BCF4DB291124LL, 0x68C1170D4C16A462LL)))
            { 
                int64_t l_207 = 9L;
                int32_t l_212[3][3];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_212[i][j] = (-1L);
                }
                ++l_204;
                --g_208;
                l_212[1][0] = (4L ^ l_211);
            }
            else
            { 
                uint64_t l_213 = 0x623E6BFF233E68E4LL;
                ++l_213;
            }
        }
        else
        { 
            struct S0 l_225 = {0xE5F8D8BDL,0x85A3F029L,4L,0xB1E6F47C9686BF02LL};
            for (g_203 = 1; (g_203 >= 0); g_203 -= 1)
            { 
                int i;
                g_216[1][4][0]++;
                g_31 = ((safe_add_func_int8_t_s_s((safe_div_func_uint64_t_u_u(g_202[g_203], (safe_add_func_uint16_t_u_u(g_202[(g_203 + 2)], g_202[(g_203 + 1)])))), (((0xA2B83AE8L <= g_156[g_203]) >= l_178[3]) && 0x521A4600C22193E6LL))) < 4294967295UL);
                if (l_140[0][2][0])
                    continue;
            }
            return l_225;
        }
        for (g_194.f3.f0 = 0; (g_194.f3.f0 >= 41); g_194.f3.f0 = safe_add_func_int16_t_s_s(g_194.f3.f0, 5))
        { 
            uint16_t l_239 = 0x073DL;
            struct S3 l_251 = {{{18446744073709551615UL},0xD10087D2L,0x5BA9C812L,{9UL,-1L,-2L,0x8BB68FCA7E3DBFE5LL},{0x5E1387A8L}}};
            int32_t l_252 = 1L;
            for (g_194.f0.f0 = (-22); (g_194.f0.f0 == 48); ++g_194.f0.f0)
            { 
                int16_t l_240 = (-4L);
                l_241[3] = (safe_lshift_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((!(g_194 , 0x07E7D1A1L)), ((g_31 &= (g_4 != (safe_sub_func_uint64_t_u_u(((safe_div_func_uint32_t_u_u(l_199, g_194.f3.f3)) | g_96), l_239)))) <= l_240))) && g_156[1]) == (-8L)), g_29));
                if (g_29)
                    break;
            }
            if (g_81)
            { 
                const int32_t l_242[5] = {0L,0L,0L,0L,0L};
                int i;
                g_243 = (l_242[2] >= l_242[0]);
            }
            else
            { 
                int32_t l_250 = 0x73AD263BL;
                g_31 ^= (((l_244 , l_199) == (safe_mul_func_int8_t_s_s(((!(g_194.f0.f0 && (((((safe_rshift_func_uint16_t_u_s(l_250, g_81)) , l_251) , g_61[0]) , 0xABL) & g_208))) & 0xEC3AFA74D9B91490LL), 0UL))) != l_178[0]);
            }
            --g_254;
        }
    }
    l_268 = ((l_178[0] = g_156[0]) >= (0xDAL ^ (safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(l_150.f0, 0)) ^ (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((((!1L) > g_122) | 1L), l_150.f0)) > 0x94L) , 0x60L), l_140[0][1][1])), 0x084EC38940A22E7CLL))), (-1L)))));
    return g_194.f3;
}



static uint32_t  func_2(uint8_t  p_3)
{ 
    uint16_t l_19 = 1UL;
    union U7 l_27 = {18446744073709551608UL};
    int32_t l_28 = (-1L);
    int32_t l_113 = 0xA735059AL;
    int32_t l_121 = (-5L);
    uint8_t l_138 = 0x8CL;
    int8_t l_139 = 0xAAL;
    l_113 = (safe_mod_func_int16_t_s_s(func_7(func_10(((safe_rshift_func_int8_t_s_s(((((((safe_div_func_int16_t_s_s(l_19, (l_28 = (~((safe_div_func_int64_t_s_s((safe_add_func_int8_t_s_s((g_4 <= (safe_sub_func_uint32_t_u_u((l_27 , p_3), g_4))), 0UL)), l_27.f0)) <= l_19))))) & g_4) | g_4) <= 0xDD61FB9AL) , l_27.f0) != 0x129EL), l_19)) , 0xDF47F28AL), l_19, p_3, l_19), p_3), g_61[0].f1));
    l_113 ^= 0x9A04901EL;
    l_28 = ((safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint16_t_u_u(l_28, (l_27 , (safe_mul_func_int8_t_s_s((l_139 = ((g_122++) & (safe_sub_func_int8_t_s_s((!(safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((g_4++), (((1UL < (((safe_sub_func_int16_t_s_s((safe_div_func_uint64_t_u_u(l_28, p_3)), 0x966AL)) , l_138) | p_3)) ^ 0x96L) >= 0UL))) >= l_113), 0x959BL))), p_3)))), g_61[0].f0))))) , (-1L)) < 18446744073709551615UL), 6)) ^ g_29);
    return p_3;
}



static int16_t  func_7(union U5  p_8, uint8_t  p_9)
{ 
    int16_t l_67 = 7L;
    struct S1 l_97 = {18446744073709551609UL};
    int32_t l_112[4] = {0xECAE5D5DL,0xECAE5D5DL,0xECAE5D5DL,0xECAE5D5DL};
    int i;
    g_62 = g_62;
    for (g_29 = 0; (g_29 >= 51); g_29 = safe_add_func_uint16_t_u_u(g_29, 5))
    { 
        uint32_t l_68[2][3];
        int32_t l_71 = (-1L);
        struct S3 l_76 = {{{0UL},0x0BDA1A75L,0x26FF5532L,{0xF2D06095L,-6L,0xCAE23F11L,0x9D328171C63CC5DBLL},{18446744073709551611UL}}};
        int32_t l_92[3][1][4] = {{{0xE8D80EE5L,0x088E2D1EL,0x91B7FB1DL,0x088E2D1EL}},{{0x088E2D1EL,(-1L),0x91B7FB1DL,0x91B7FB1DL}},{{0xE8D80EE5L,0xE8D80EE5L,0x088E2D1EL,0x91B7FB1DL}}};
        int32_t l_93[4];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_68[i][j] = 0x8F52837BL;
        }
        for (i = 0; i < 4; i++)
            l_93[i] = (-1L);
        for (g_31 = 23; (g_31 > (-15)); g_31--)
        { 
            uint64_t l_94 = 0x9F9328501D8DD584LL;
            int32_t l_98[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_98[i][j] = 0L;
            }
            l_68[1][1] &= (l_67 = g_4);
            if ((safe_mul_func_uint8_t_u_u(((l_71 = (g_31 > g_61[0].f1)) & (safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((l_76 , ((safe_rshift_func_uint16_t_u_s((l_93[3] = ((safe_mul_func_uint8_t_u_u((g_81--), ((safe_mod_func_int8_t_s_s(((l_92[0][0][0] = ((safe_mod_func_int16_t_s_s(((((safe_add_func_int32_t_s_s((safe_mod_func_int64_t_s_s(g_61[0].f0, 0xE4714FE20FE05587LL)), 1L)) , p_8.f1) > 0xC253094EEE57E67FLL) < g_62.f0), g_61[0].f0)) != p_8.f1)) | p_9), l_67)) || 0x1E30L))) >= p_9)), g_4)) || g_61[0].f0)), p_8.f0)), l_76.f0.f0.f0))), l_94)))
            { 
                uint32_t l_99 = 0xA95A077DL;
                g_96 |= (~l_67);
                l_76.f0.f4 = l_97;
                --l_99;
            }
            else
            { 
                if (g_61[0].f0)
                    break;
                if (g_61[0].f1)
                    continue;
            }
            return g_62.f0;
        }
    }
    l_112[2] = (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((g_96 = 1UL), (safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(p_8.f0, (((safe_rshift_func_uint8_t_u_s((p_9 &= 0x31L), 4)) >= (0x55D16F98L < l_97.f0)) ^ (-3L)))), g_61[0].f0)))), p_8.f1));
    return g_81;
}



static union U5  func_10(int32_t  p_11, uint16_t  p_12, int32_t  p_13, uint32_t  p_14)
{ 
    uint32_t l_30[1];
    int32_t l_35 = 0x1EAE8837L;
    int i;
    for (i = 0; i < 1; i++)
        l_30[i] = 0xA2C6EB81L;
    g_29 &= g_4;
    for (g_29 = 0; (g_29 <= 0); g_29 += 1)
    { 
        struct S0 l_40 = {0x9752EE8BL,0x203FCA5EL,-1L,18446744073709551612UL};
        int32_t l_41 = 1L;
        for (p_11 = 0; (p_11 <= 0); p_11 += 1)
        { 
            int i;
            g_31 ^= l_30[g_29];
            p_13 = ((safe_lshift_func_uint16_t_u_u((!g_29), 3)) ^ ((l_35 = l_30[g_29]) && (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(g_29, 2)) < (l_41 |= (((l_40 , p_11) >= 0x49DDL) , 0xDCF8610F121ADF56LL))), (-1L)))));
            if (p_11)
                continue;
        }
        for (p_11 = 0; (p_11 >= 0); p_11 -= 1)
        { 
            uint64_t l_59 = 0x3A5B7DFF937B1BDALL;
            int32_t l_60 = 0x3DD60280L;
            int i;
            l_60 = (((safe_mod_func_int64_t_s_s((+(((l_30[p_11] >= (~(((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((--g_4), (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(l_30[g_29], 5)), (g_31 < (!1L)))), 4L)))), 7)) ^ p_11) != p_11))) != l_59) && g_29)), 18446744073709551615UL)) ^ l_59) < g_31);
        }
    }
    return g_61[0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_61[i].f0, "g_61[i].f0", print_hash_value);
        transparent_crc(g_61[i].f1, "g_61[i].f1", print_hash_value);

    }
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_156[i], "g_156[i]", print_hash_value);

    }
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_193.f0, "g_193.f0", print_hash_value);
    transparent_crc(g_194.f0.f0, "g_194.f0.f0", print_hash_value);
    transparent_crc(g_194.f1, "g_194.f1", print_hash_value);
    transparent_crc(g_194.f2, "g_194.f2", print_hash_value);
    transparent_crc(g_194.f3.f0, "g_194.f3.f0", print_hash_value);
    transparent_crc(g_194.f3.f1, "g_194.f3.f1", print_hash_value);
    transparent_crc(g_194.f3.f2, "g_194.f3.f2", print_hash_value);
    transparent_crc(g_194.f3.f3, "g_194.f3.f3", print_hash_value);
    transparent_crc(g_194.f4.f0, "g_194.f4.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_202[i], "g_202[i]", print_hash_value);

    }
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_216[i][j][k], "g_216[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
