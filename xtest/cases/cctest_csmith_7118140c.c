// SPDX-License-Identifier: MIT
// cctest_csmith_7118140c.c --- cctest case csmith_7118140c (csmith seed 1897403404)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x852f1996 */

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

// Options:   -s 1897403404 -o /tmp/csmith_gen_9wajesi3/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   int32_t  f1;
   int8_t  f2;
   const int8_t  f3;
   const int32_t  f4;
};
#pragma pack(pop)

struct S1 {
   uint32_t  f0;
   uint16_t  f1;
};

union U4 {
   int8_t  f0;
   uint16_t  f1;
   struct S1  f2;
};

union U5 {
   int8_t  f0;
   int32_t  f1;
};


static int32_t g_3 = 0x4AD37400L;
static uint64_t g_17 = 0xBD5DE1FC65786371LL;
static uint16_t g_18 = 0x0F9EL;
static struct S0 g_21 = {0L,1L,0x17L,-1L,0x2D5FBA25L};
static struct S1 g_22 = {18446744073709551612UL,0xE91CL};
static union U4 g_44 = {0x98L};
static int8_t g_49[2] = {(-6L),(-6L)};
static uint32_t g_53 = 0x659E808EL;
static int16_t g_60 = 0x179DL;
static int16_t g_61 = (-10L);
static uint8_t g_62[5] = {0UL,0UL,0UL,0UL,0UL};
static uint8_t g_72[5][5][1] = {{{0xCCL},{1UL},{0xF7L},{1UL},{0xCCL}},{{1UL},{0xF7L},{1UL},{0xCCL},{1UL}},{{0xF7L},{1UL},{0xCCL},{1UL},{0xF7L}},{{1UL},{0xCCL},{1UL},{0xF7L},{1UL}},{{0xCCL},{1UL},{0xF7L},{1UL},{0xCCL}}};
static int16_t g_92 = 0xF8C8L;
static uint64_t g_113 = 18446744073709551610UL;
static union U5 g_121[3] = {{0L},{0L},{0L}};
static int16_t g_184[2] = {0xCFB4L,0xCFB4L};
static int32_t g_212[3] = {0x11968FDBL,0x11968FDBL,0x11968FDBL};
static int16_t g_216 = 0x87BBL;
static uint16_t g_219 = 0x5788L;



static uint64_t  func_1(void);
static uint16_t  func_6(const uint64_t  p_7, union U4  p_8, uint32_t  p_9, int16_t  p_10);
static uint8_t  func_11(uint32_t  p_12, uint8_t  p_13, struct S1  p_14);
static uint32_t  func_24(int32_t  p_25);




static uint64_t  func_1(void)
{ 
    uint32_t l_2[2][1][1];
    int32_t l_148 = 0xA8E61E94L;
    union U5 l_155 = {-1L};
    uint8_t l_168 = 0x5AL;
    uint32_t l_169 = 0x8DC00671L;
    struct S1 l_204 = {0UL,0UL};
    int32_t l_213 = (-6L);
    int32_t l_214 = 1L;
    int32_t l_215 = (-10L);
    int32_t l_217[4] = {0x15E9F7B3L,0x15E9F7B3L,0x15E9F7B3L,0x15E9F7B3L};
    int64_t l_218 = 0x8E2EF62936AD9C87LL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_2[i][j][k] = 0xEDEDB5CAL;
        }
    }
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    { 
        uint16_t l_45[2][4][5] = {{{0x2888L,0x2888L,0x2888L,0x2888L,0x2888L},{0x31B5L,1UL,0x31B5L,1UL,0x31B5L},{0x2888L,0x2888L,0x2888L,0x2888L,0x2888L},{0x31B5L,1UL,0x31B5L,1UL,0x31B5L}},{{0x2888L,0x2888L,0x2888L,0x2888L,0x2888L},{0x31B5L,1UL,0x31B5L,1UL,0x31B5L},{0x2888L,0x2888L,0x2888L,0x2888L,0x2888L},{0x31B5L,1UL,0x31B5L,1UL,0x31B5L}}};
        int32_t l_139 = 0x8C22D3DAL;
        int32_t l_147 = 0xFB47EBAEL;
        int i, j, k;
        if (g_3)
            break;
        l_139 &= (safe_rshift_func_uint16_t_u_u(func_6((0xFEL == func_11((g_18 = (safe_lshift_func_int16_t_s_u((g_17 = g_3), g_3))), (((((safe_div_func_int8_t_s_s(g_3, g_3)) , g_21) , l_2[1][0][0]) == l_2[1][0][0]) || g_21.f1), g_22)), g_44, l_2[0][0][0], l_45[1][2][1]), g_21.f0));
        if ((6UL >= 0xD75DE8CEL))
        { 
            g_121[0].f1 = g_44.f0;
        }
        else
        { 
            return l_2[1][0][0];
        }
        for (g_21.f2 = 0; (g_21.f2 >= 0); g_21.f2 -= 1)
        { 
            uint32_t l_151 = 1UL;
            uint32_t l_167 = 0xF5ADCE77L;
            int32_t l_170 = 0x054C286EL;
            l_151 = (safe_add_func_int64_t_s_s((l_139 >= (safe_add_func_uint32_t_u_u((((+((safe_mul_func_uint16_t_u_u(((65535UL | (g_44 , (--g_18))) , 0UL), g_62[3])) & 0x2E11L)) > g_22.f1) > (-3L)), l_139))), g_21.f0));
            for (l_148 = 0; (l_148 <= 0); l_148 += 1)
            { 
                uint64_t l_152 = 0UL;
                --l_152;
            }
            for (g_22.f0 = 0; (g_22.f0 <= 0); g_22.f0 += 1)
            { 
                int i, j, k;
                l_170 &= (l_155 , (((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(0x52EAL, (((((safe_mod_func_uint32_t_u_u((!(l_2[(g_3 + 1)][g_3][g_3] || (((((g_62[3] = (safe_mod_func_int64_t_s_s(((safe_add_func_int64_t_s_s(0L, 0x0FBAA5094A51A485LL)) > 0x63L), 18446744073709551615UL))) && 0xA0L) || g_72[0][0][0]) | 255UL) <= 0L))), g_61)) ^ g_3) && l_167) > g_113) <= l_139))) == l_148), 6)) > l_168) <= l_169));
                l_148 = (safe_sub_func_int32_t_s_s(g_53, (safe_div_func_uint16_t_u_u((!(g_22.f1 &= ((safe_mul_func_uint8_t_u_u(0UL, ((safe_sub_func_int8_t_s_s((l_147 |= ((safe_lshift_func_uint8_t_u_s(l_2[(g_3 + 1)][g_3][g_3], 1)) > (((safe_mul_func_uint8_t_u_u((g_121[0] , l_45[0][0][3]), l_2[(g_3 + 1)][g_3][g_3])) > l_167) && (-4L)))), g_92)) || 0xFB1EL))) >= g_21.f1))), 0x6656L))));
                if (g_184[0])
                    continue;
            }
        }
    }
    for (g_18 = 0; (g_18 <= 1); g_18 += 1)
    { 
        struct S1 l_185 = {0xA6631785L,8UL};
        l_185 = g_22;
        for (g_53 = 0; (g_53 <= 1); g_53 += 1)
        { 
            const uint32_t l_202 = 0xF4FEEF6EL;
            int32_t l_203 = 0x6A10C0C6L;
            for (g_44.f0 = 0; (g_44.f0 <= 2); g_44.f0 += 1)
            { 
                int i;
                g_3 |= (((g_113++) , ((safe_add_func_uint8_t_u_u((((l_203 = (safe_sub_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_s(g_62[g_18], 14)) != (((safe_sub_func_int16_t_s_s((-1L), (safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((((-4L) == (safe_mod_func_int32_t_s_s((l_168 <= l_202), g_18))) ^ g_22.f1), 0L)), 0x79A64F93L)))) == g_21.f1) == g_121[0].f0)) != l_168), l_148))) != 8L) && l_185.f1), 0L)) == l_2[0][0][0])) ^ 0xF12570141F537715LL);
                l_155.f1 = g_62[g_18];
                g_22 = (l_204 = g_22);
            }
        }
    }
    for (l_204.f1 = (-17); (l_204.f1 < 15); l_204.f1 = safe_add_func_int32_t_s_s(l_204.f1, 9))
    { 
        uint8_t l_207 = 1UL;
        int32_t l_210[5];
        int16_t l_211[5] = {0L,0L,0L,0L,0L};
        int i;
        for (i = 0; i < 5; i++)
            l_210[i] = 0xADF2D24EL;
        l_207++;
        g_219++;
        g_212[1] &= (safe_div_func_int8_t_s_s((g_62[3] || (g_44.f0 == l_207)), g_121[0].f0));
    }
    return g_3;
}



static uint16_t  func_6(const uint64_t  p_7, union U4  p_8, uint32_t  p_9, int16_t  p_10)
{ 
    uint32_t l_46 = 5UL;
    int32_t l_47 = 0x4E93343DL;
    int32_t l_52 = 0xED7B9758L;
    int32_t l_80 = 0xC6B82E5CL;
    uint32_t l_101[3][5][2] = {{{8UL,18446744073709551615UL},{8UL,0xC2C54013L},{0xD01B0F43L,1UL},{0xC2C54013L,0x7BF50803L},{0xB7196FBAL,0xC2C54013L}},{{18446744073709551615UL,8UL},{8UL,18446744073709551607UL},{0xB7196FBAL,1UL},{18446744073709551607UL,1UL},{0xB7196FBAL,18446744073709551607UL}},{{8UL,8UL},{18446744073709551615UL,0xC2C54013L},{0xB7196FBAL,0x7BF50803L},{0xC2C54013L,1UL},{0xD01B0F43L,0xC2C54013L}}};
    struct S1 l_105 = {0xB99A0934L,0xD925L};
    int32_t l_135[4] = {(-1L),(-1L),(-1L),(-1L)};
    uint32_t l_136 = 18446744073709551615UL;
    int i, j, k;
    if ((l_47 ^= (l_46 != g_3)))
    { 
        int8_t l_48 = 1L;
        int32_t l_50 = (-2L);
        int32_t l_51 = 0L;
        g_53--;
    }
    else
    { 
        uint64_t l_65 = 0x33F2F19166C0C082LL;
        int32_t l_70 = 0x211FA8BFL;
        struct S1 l_90 = {0x09415F90L,0x30FDL};
    }
    l_136--;
    l_47 &= (-10L);
    return p_9;
}



static uint8_t  func_11(uint32_t  p_12, uint8_t  p_13, struct S1  p_14)
{ 
    const int32_t l_26 = (-5L);
    int32_t l_41 = 0x5A975881L;
    int32_t l_42 = 0xD52FFABEL;
    int32_t l_43 = (-1L);
    l_43 ^= (l_42 = ((l_41 = ((g_21.f2 = (!(func_24(((g_21.f3 > (((l_26 & 0x9DEB4763523E24B1LL) , (safe_add_func_uint16_t_u_u(0x3592L, 0UL))) != p_14.f1)) ^ g_21.f2)) & p_14.f0))) <= 0L)) <= (-1L)));
    return g_21.f0;
}



static uint32_t  func_24(int32_t  p_25)
{ 
    struct S0 l_37 = {-1L,0L,0x75L,0xEBL,0L};
    union U5 l_38[1][3] = {{{-8L},{-8L},{-8L}}};
    int32_t l_39 = 6L;
    int32_t l_40[5][5] = {{(-1L),(-2L),(-1L),0xB1ECBC59L,(-2L)},{0xE2E4BCB8L,(-9L),0xB1ECBC59L,0xE2E4BCB8L,0xB1ECBC59L},{0xE2E4BCB8L,0xE2E4BCB8L,0x61DBFA2FL,(-2L),0x6287676EL},{(-1L),0x6287676EL,0xB1ECBC59L,0xB1ECBC59L,0x6287676EL},{0x6287676EL,(-9L),(-1L),0x6287676EL,0xB1ECBC59L}};
    int i, j;
    l_40[1][3] |= (safe_rshift_func_uint16_t_u_s(((l_38[0][0].f1 = (p_25 > (safe_div_func_int64_t_s_s((p_25 ^ ((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((l_37 , (l_38[0][0] , g_22.f0)), g_3)), g_21.f2)) > 0x9F33D48A24E228C5LL)), g_21.f1)))) <= 0x0732BAB2BD68E480LL), l_39));
    return g_21.f2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_21.f1, "g_21.f1", print_hash_value);
    transparent_crc(g_21.f2, "g_21.f2", print_hash_value);
    transparent_crc(g_21.f3, "g_21.f3", print_hash_value);
    transparent_crc(g_21.f4, "g_21.f4", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_44.f0, "g_44.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_49[i], "g_49[i]", print_hash_value);

    }
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_72[i][j][k], "g_72[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_121[i].f0, "g_121[i].f0", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_184[i], "g_184[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_212[i], "g_212[i]", print_hash_value);

    }
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
