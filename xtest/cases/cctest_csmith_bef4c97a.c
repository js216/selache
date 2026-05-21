// SPDX-License-Identifier: MIT
// cctest_csmith_bef4c97a.c --- cctest case csmith_bef4c97a (csmith seed 3203713402)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x81f0682a */

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

// Options:   -s 3203713402 -o /tmp/csmith_gen_5b3tqrhq/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   uint64_t  f1;
   int32_t  f2;
   uint8_t  f3;
   int32_t  f4;
   int8_t  f5;
};
#pragma pack(pop)

union U1 {
   uint16_t  f0;
   int64_t  f1;
   uint32_t  f2;
   uint16_t  f3;
   int64_t  f4;
};


static uint8_t g_11 = 255UL;
static const union U1 g_28 = {0xD635L};
static int32_t g_56 = 0xC08A59C2L;
static uint32_t g_69 = 0xE1695EA9L;
static int32_t g_74 = 0x3E0ECE95L;
static uint16_t g_77 = 0xA7CFL;
static int8_t g_82 = 0x84L;
static int64_t g_87 = 0x7292F9027EA7EABBLL;
static int32_t g_89 = 1L;
static uint32_t g_90 = 18446744073709551613UL;
static int32_t *g_94 = (void*)0;
static int32_t **g_93[4] = {&g_94,&g_94,&g_94,&g_94};
static int32_t ***g_103[4][7][5] = {{{(void*)0,&g_93[1],&g_93[1],&g_93[3],&g_93[1]},{&g_93[1],(void*)0,(void*)0,&g_93[3],&g_93[3]},{&g_93[1],(void*)0,(void*)0,&g_93[3],(void*)0},{&g_93[1],&g_93[2],(void*)0,&g_93[3],&g_93[3]},{&g_93[1],(void*)0,&g_93[3],&g_93[3],&g_93[3]},{(void*)0,&g_93[1],(void*)0,(void*)0,(void*)0},{&g_93[3],&g_93[3],&g_93[3],&g_93[1],&g_93[3]}},{{&g_93[3],&g_93[3],&g_93[1],&g_93[2],(void*)0},{&g_93[1],(void*)0,(void*)0,&g_93[3],&g_93[3]},{&g_93[0],&g_93[3],&g_93[3],&g_93[3],&g_93[0]},{(void*)0,&g_93[1],&g_93[3],&g_93[3],(void*)0},{&g_93[3],&g_93[3],(void*)0,(void*)0,(void*)0},{&g_93[3],(void*)0,&g_93[0],&g_93[3],(void*)0},{&g_93[3],&g_93[3],&g_93[1],(void*)0,(void*)0}},{{&g_93[2],(void*)0,&g_93[0],(void*)0,&g_93[0]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_93[3]},{(void*)0,&g_93[3],&g_93[2],&g_93[3],&g_93[2]},{(void*)0,&g_93[1],(void*)0,&g_93[3],&g_93[3]},{(void*)0,&g_93[3],&g_93[3],(void*)0,&g_93[1]},{&g_93[0],(void*)0,&g_93[3],&g_93[3],(void*)0},{&g_93[3],(void*)0,&g_93[3],&g_93[0],&g_93[3]}},{{&g_93[3],&g_93[3],&g_93[0],&g_93[3],&g_93[3]},{&g_93[3],(void*)0,&g_93[1],&g_93[3],&g_93[3]},{(void*)0,&g_93[3],(void*)0,&g_93[0],(void*)0},{&g_93[3],&g_93[1],&g_93[3],&g_93[3],&g_93[1]},{&g_93[2],&g_93[3],&g_93[3],(void*)0,&g_93[1]},{(void*)0,&g_93[3],&g_93[3],&g_93[3],&g_93[1]},{&g_93[3],(void*)0,&g_93[1],&g_93[3],&g_93[3]}}};
static int16_t g_159 = 1L;
static uint8_t g_164 = 0xAAL;
static struct S0 g_170 = {4294967295UL,18446744073709551614UL,9L,0x7BL,4L,0x76L};
static uint32_t g_195 = 0UL;
static const int32_t g_202 = 0xF728D4A7L;
static const int32_t g_204 = 0xC4BBD00CL;
static int8_t **g_253 = (void*)0;
static uint64_t g_298 = 3UL;
static uint32_t g_402 = 0x12262022L;
static int8_t g_492 = 1L;
static uint32_t g_500 = 0xDD3592A1L;
static uint32_t * const g_512 = &g_69;
static uint32_t * const *g_511 = &g_512;
static int8_t g_545[5][6] = {{1L,0xEFL,1L,0xD7L,1L,0xEFL},{1L,1L,(-1L),0x7EL,0x7EL,(-1L)},{1L,1L,0x7EL,0xD7L,3L,0xD7L},{1L,1L,1L,(-1L),0x7EL,0x7EL},{0xEFL,1L,1L,0xEFL,1L,0xD7L}};
static const struct S0 *g_590 = (void*)0;
static const struct S0 **g_589 = &g_590;
static const struct S0 ***g_588 = &g_589;
static union U1 g_626[5][5] = {{{0x1281L},{65531UL},{0x1281L},{0x1281L},{65531UL}},{{0UL},{1UL},{1UL},{0UL},{1UL}},{{65531UL},{65531UL},{0x0FB7L},{65531UL},{65531UL}},{{1UL},{0UL},{1UL},{1UL},{0UL}},{{65531UL},{0x1281L},{0x1281L},{65531UL},{0x1281L}}};
static union U1 *g_694[4][4] = {{&g_626[1][2],&g_626[1][2],&g_626[3][4],(void*)0},{&g_626[2][3],&g_626[2][3],&g_626[2][3],&g_626[3][4]},{&g_626[2][3],&g_626[3][4],&g_626[3][4],&g_626[2][3]},{&g_626[1][2],&g_626[3][4],(void*)0,&g_626[3][4]}};
static int8_t ***g_726 = &g_253;
static uint32_t g_748 = 4294967295UL;
static int32_t *g_751[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static int16_t g_755[6] = {0x9521L,0x9521L,0x0CF0L,0x9521L,0x9521L,0x0CF0L};
static union U1 **g_795[6] = {&g_694[2][0],&g_694[2][0],&g_694[2][0],&g_694[2][0],&g_694[2][0],&g_694[2][0]};
static struct S0 g_829 = {0x81CC1FD3L,0x40890696210D769CLL,1L,0xE3L,-5L,0L};
static union U1 ***g_943[3] = {&g_795[0],&g_795[0],&g_795[0]};
static int8_t g_1004 = 0L;
static struct S0 *g_1045 = &g_829;
static struct S0 **g_1044 = &g_1045;
static struct S0 ***g_1043 = &g_1044;
static struct S0 ****g_1042 = &g_1043;
static struct S0 *****g_1041 = &g_1042;
static int32_t ***g_1062 = &g_93[3];
static int16_t g_1224 = 0xBC00L;
static int16_t **g_1233 = (void*)0;
static const uint32_t *g_1458 = &g_195;
static const uint32_t **g_1457[3][1][2] = {{{&g_1458,&g_1458}},{{&g_1458,&g_1458}},{{&g_1458,&g_1458}}};
static const uint32_t ***g_1456 = &g_1457[0][0][0];
static const uint32_t *** const *g_1455 = &g_1456;
static uint8_t *g_1510[5][5] = {{&g_11,&g_11,&g_170.f3,&g_11,&g_11},{(void*)0,&g_11,(void*)0,(void*)0,&g_11},{&g_11,(void*)0,(void*)0,&g_11,(void*)0},{&g_11,&g_11,&g_170.f3,&g_11,&g_11},{(void*)0,&g_11,(void*)0,(void*)0,&g_11}};
static int64_t *g_1582 = &g_87;
static int64_t g_1602 = 1L;
static int8_t g_1603 = 0x70L;
static int8_t *g_1646 = &g_170.f5;
static uint8_t g_1668 = 0x29L;
static uint64_t *g_1695 = (void*)0;
static uint64_t **g_1694[3] = {&g_1695,&g_1695,&g_1695};
static int64_t g_1852 = (-1L);
static uint32_t g_1853 = 0xBF704F8FL;
static int8_t g_1862 = 0x87L;
static const int64_t g_1969 = 0x28CE07ED7A1CF437LL;
static uint32_t g_2018 = 0x72DD1A4BL;
static uint8_t g_2040 = 0x1FL;
static int16_t *g_2050 = &g_755[2];
static uint32_t g_2075[4] = {1UL,1UL,1UL,1UL};
static uint32_t *g_2088[5][2] = {{&g_170.f0,&g_195},{&g_195,&g_170.f0},{&g_195,&g_195},{&g_170.f0,&g_195},{&g_195,&g_170.f0}};
static uint32_t **g_2087 = &g_2088[0][0];
static uint32_t ***g_2086 = &g_2087;
static uint32_t ****g_2085[3] = {&g_2086,&g_2086,&g_2086};
static uint32_t **** const *g_2084 = &g_2085[0];
static const uint32_t g_2329 = 0xF9374BA5L;
static union U1 ****g_2331 = &g_943[0];
static union U1 **** const *g_2330 = &g_2331;
static uint64_t *** const g_2349[2] = {&g_1694[1],&g_1694[1]};
static uint64_t *** const *g_2348 = &g_2349[1];
static uint64_t **** const *g_2422[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t g_2430 = (-1L);
static struct S0 g_2444 = {6UL,18446744073709551615UL,5L,0x89L,0x1EFC81CAL,0x23L};
static int64_t g_2445 = (-4L);



static uint32_t  func_1(void);
static struct S0  func_2(int8_t  p_3, int32_t  p_4, int8_t  p_5, int32_t  p_6, uint32_t  p_7);
static int16_t  func_12(uint32_t  p_13, int16_t  p_14, const uint32_t  p_15, uint64_t  p_16, int32_t  p_17);
static union U1  func_20(int64_t  p_21, uint8_t  p_22);
static int32_t  func_23(const union U1  p_24, int32_t  p_25, uint32_t  p_26, struct S0  p_27);
static uint64_t  func_31(union U1  p_32);
static int32_t  func_37(int32_t  p_38, int64_t  p_39, int32_t  p_40, int64_t  p_41);
static uint16_t  func_43(struct S0  p_44, int32_t  p_45, int32_t  p_46, uint32_t  p_47);




static uint32_t  func_1(void)
{ 
    int32_t l_8 = 0xBBF9ACF2L;
    int32_t l_946 = 8L;
    struct S0 l_947 = {4294967295UL,9UL,0x5E85C805L,0x9BL,-6L,0xC9L};
    int8_t l_951 = 8L;
    uint32_t l_1987 = 3UL;
    uint64_t l_1988 = 9UL;
    uint32_t **** const *l_2083 = (void*)0;
    int32_t *l_2089 = &g_56;
    int32_t *l_2090 = &g_74;
    int32_t *l_2091 = &g_74;
    int32_t *l_2092 = &g_74;
    int32_t *l_2093 = &g_56;
    int32_t *l_2094 = &g_56;
    int32_t *l_2095[4];
    uint8_t l_2096 = 0xC5L;
    uint32_t ***l_2103 = &g_2087;
    uint16_t *l_2118 = &g_77;
    uint16_t *l_2119 = &g_626[2][3].f3;
    uint8_t l_2120 = 0xC9L;
    uint64_t l_2121 = 18446744073709551615UL;
    int32_t l_2147 = 0xF810200EL;
    union U1 l_2162 = {0xC70FL};
    uint64_t l_2187 = 2UL;
    int64_t l_2211 = 0x6B3155AD21439294LL;
    uint8_t l_2243 = 0x3FL;
    uint8_t l_2247[3];
    int64_t l_2259 = 0x4FFDEABFD090D790LL;
    const struct S0 ** const **l_2275 = (void*)0;
    union U1 ****l_2326 = &g_943[0];
    const uint8_t **l_2375 = (void*)0;
    const uint8_t ***l_2374[2];
    int32_t *l_2436[4];
    int i;
    for (i = 0; i < 4; i++)
        l_2095[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_2247[i] = 0UL;
    for (i = 0; i < 2; i++)
        l_2374[i] = &l_2375;
    for (i = 0; i < 4; i++)
        l_2436[i] = (void*)0;
    (****g_1042) = func_2(l_8, (l_8 , (safe_rshift_func_int16_t_s_s(((g_11 && func_12(l_8, (safe_mod_func_uint8_t_u_u((func_20((func_23(g_28, ((safe_add_func_uint64_t_u_u(func_31(g_28), 0x7B2F7180A44FEC07LL)) , l_946), l_8, l_947) , l_951), l_8) , l_946), (-8L))), l_946, g_164, g_204)) | 0xD59B732EL), l_1987))), l_1988, l_947.f5, l_8);
    g_2084 = l_2083;
    --l_2096;
    return (*l_2092);
}



static struct S0  func_2(int8_t  p_3, int32_t  p_4, int8_t  p_5, int32_t  p_6, uint32_t  p_7)
{ 
    int32_t l_1991 = 9L;
    uint8_t *l_1992 = &g_164;
    int32_t *l_1995[4] = {&l_1991,&l_1991,&l_1991,&l_1991};
    int64_t l_1996 = 1L;
    uint64_t *l_2024[3][4][5] = {{{&g_829.f1,&g_298,&g_298,&g_298,&g_829.f1},{&g_829.f1,&g_298,&g_298,&g_298,&g_829.f1},{&g_829.f1,&g_298,&g_298,&g_298,&g_829.f1},{&g_829.f1,&g_298,&g_298,&g_298,&g_829.f1}},{{&g_829.f1,&g_298,&g_298,&g_298,&g_829.f1},{&g_829.f1,&g_298,&g_298,&g_298,&g_829.f1},{&g_829.f1,&g_298,&g_298,&g_298,&g_829.f1},{&g_829.f1,&g_298,&g_298,&g_298,&g_829.f1}},{{&g_829.f1,&g_298,&g_298,&g_298,&g_829.f1},{&g_829.f1,&g_298,&g_298,&g_298,&g_829.f1},{&g_829.f1,&g_298,&g_298,&g_298,&g_829.f1},{&g_829.f1,&g_298,&g_298,&g_298,&g_829.f1}}};
    struct S0 l_2026 = {4294967295UL,0xE4A209A7B689136ELL,7L,251UL,0x051BCA8FL,0x54L};
    int16_t *l_2047 = &g_1224;
    uint16_t l_2073 = 0xF363L;
    uint64_t l_2082 = 18446744073709551607UL;
    int i, j, k;
    l_1996 = (p_4 = (p_6 = (safe_div_func_uint8_t_u_u(l_1991, (--(*l_1992))))));
    for (g_1224 = 3; (g_1224 >= 0); g_1224 -= 1)
    { 
        int32_t l_1997 = 0xB1FFF299L;
        int32_t l_2006 = 8L;
        int32_t l_2012 = 0L;
        int32_t l_2014[2][5][5] = {{{(-1L),0x08185533L,(-1L),0x8F992924L,1L},{0xC2F3F586L,0x7098F3C5L,1L,0x7098F3C5L,0xC2F3F586L},{(-1L),0x7098F3C5L,0x08185533L,0xC2F3F586L,0x08185533L},{0x08185533L,0x08185533L,1L,0xC2F3F586L,1L},{0x7098F3C5L,(-1L),(-1L),0x7098F3C5L,0x08185533L}},{{0x7098F3C5L,0xC2F3F586L,0x8F992924L,0x8F992924L,0xC2F3F586L},{0x08185533L,(-1L),0x8F992924L,1L,1L},{(-1L),0x08185533L,(-1L),0x8F992924L,1L},{0xC2F3F586L,(-1L),0x08185533L,(-1L),0x8F992924L},{0xC2F3F586L,(-1L),1L,0x8F992924L,1L}}};
        int32_t l_2017 = 0x45CA1611L;
        uint64_t *l_2023 = &g_298;
        int16_t l_2036 = 0x7877L;
        struct S0 ***l_2052 = (void*)0;
        uint32_t l_2072 = 0xBF79B60FL;
        int i, j, k;
        (**g_1062) = &p_4;
        for (p_5 = 3; (p_5 >= 0); p_5 -= 1)
        { 
            struct S0 l_1998 = {4294967295UL,0UL,-6L,247UL,9L,1L};
            int32_t l_1999 = 9L;
            int32_t l_2003 = 1L;
            int32_t l_2004 = 0x615ECE5BL;
            int32_t l_2005 = (-2L);
            int32_t l_2007 = 0x6FF075D2L;
            int32_t l_2009 = 0x80587EE8L;
            int32_t l_2010[4] = {0L,0L,0L,0L};
            uint64_t *l_2025 = &g_829.f1;
            int8_t **l_2031 = &g_1646;
            int16_t *l_2041 = (void*)0;
            const uint32_t l_2058[2] = {18446744073709551610UL,18446744073709551610UL};
            int i;
            for (g_170.f3 = 0; (g_170.f3 <= 4); g_170.f3 += 1)
            { 
                int32_t l_2000 = 4L;
                int32_t l_2001 = (-4L);
                int64_t l_2002[6][1] = {{0xF53F57CB042068C4LL},{0xF53F57CB042068C4LL},{0x0E30E40A5E988175LL},{0xF53F57CB042068C4LL},{0xF53F57CB042068C4LL},{0x0E30E40A5E988175LL}};
                int32_t l_2008 = 0L;
                int32_t l_2011 = 0x1E3289D6L;
                int32_t l_2013 = 0xD76415B3L;
                int32_t l_2015 = 1L;
                int32_t l_2016 = 0xF513DFFDL;
                int i, j;
                if (l_1997)
                    break;
                (**g_1044) = l_1998;
                --g_2018;
            }
            (*g_1045) = l_1998;
            if ((safe_unary_minus_func_uint8_t_u(l_2014[0][0][0])))
            { 
                for (g_402 = 0; (g_402 <= 3); g_402 += 1)
                { 
                    return l_1998;
                }
                l_2026 = ((!((l_2023 != (l_2025 = l_2024[0][2][1])) && p_3)) , l_1998);
            }
            else
            { 
                uint8_t *l_2037 = &g_164;
                struct S0 l_2046 = {4294967295UL,0xE729CD83A90F430BLL,-8L,0xF4L,-7L,0L};
                int16_t **l_2048 = (void*)0;
                int16_t **l_2049 = (void*)0;
                uint32_t *l_2051 = &g_500;
                int i, j;
                l_2017 = (safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((((p_3 < p_6) <= ((void*)0 != l_2031)) ^ (safe_lshift_func_int16_t_s_u(((l_2036 && ((void*)0 == l_2037)) >= p_7), g_626[2][3].f3))), p_4)) && p_5) , p_4), l_2003));
                if ((((((*l_2051) = ((safe_mod_func_uint32_t_u_u((g_2040 <= (((l_2003 || (-9L)) , l_2041) != (g_2050 = ((((p_5 > p_5) == (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((l_2046 , l_2006) && l_2006), l_2006)) , p_7), g_1668))) != l_1998.f0) , l_2047)))), l_1999)) >= g_170.f3)) , l_2052) != l_2052) && p_3))
                { 
                    const uint32_t l_2053 = 4294967294UL;
                    int32_t *l_2074 = &l_1991;
                    int i;
                    if (l_2053)
                        break;
                    if (l_1998.f4)
                        break;
                    l_2074 = ((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((*g_1646), 7)), l_2058[0])) | (p_5 ^ (safe_mul_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_u(((*l_2037) = ((+0UL) != ((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(p_4, (**g_511))), (safe_sub_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s((((l_2072 , p_7) ^ 0x1426E82DA3904EBFLL) , (*g_2050)), 0xD480L)) | (*g_1646)) , 0UL), l_2058[0])))) > l_2014[1][1][0]))), l_2036)) , l_2053) != l_2073) < p_3), l_2053)))) >= p_6) , (void*)0);
                    (*g_94) ^= (g_402 , 0x660302A9L);
                }
                else
                { 
                    (*g_94) = (g_2075[0] , (safe_mod_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(p_4, ((safe_sub_func_uint8_t_u_u((l_2082 | (p_6 = 0x2C228FB3L)), p_5)) | (((*l_2037) = l_2005) != (*g_1646))))), 4L)));
                }
            }
            if (p_4)
                continue;
        }
    }
    return l_2026;
}



static int16_t  func_12(uint32_t  p_13, int16_t  p_14, const uint32_t  p_15, uint64_t  p_16, int32_t  p_17)
{ 
    int8_t l_1166 = 1L;
    int8_t l_1175[3];
    uint32_t *l_1178 = &g_402;
    int32_t l_1185 = 0x822343E7L;
    int8_t *l_1186[4] = {&l_1175[2],&l_1175[2],&l_1175[2],&l_1175[2]};
    uint32_t l_1187 = 0UL;
    int32_t l_1193 = (-1L);
    int32_t l_1195 = (-5L);
    int32_t l_1196[1][6][4] = {{{3L,0xF4A27AF0L,0xF4A27AF0L,3L},{0xF4A27AF0L,3L,0xF4A27AF0L,0xF4A27AF0L},{3L,3L,6L,3L},{3L,0xF4A27AF0L,0xF4A27AF0L,3L},{0xF4A27AF0L,3L,0xF4A27AF0L,0xF4A27AF0L},{3L,3L,6L,3L}}};
    uint8_t l_1198 = 255UL;
    const struct S0 *l_1212[4][4] = {{(void*)0,&g_829,&g_829,(void*)0},{&g_829,(void*)0,&g_170,&g_829},{&g_829,&g_170,&g_829,&g_829},{(void*)0,&g_829,&g_829,&g_829}};
    uint32_t l_1219 = 0UL;
    uint32_t l_1225[5];
    uint32_t l_1232 = 0UL;
    struct S0 *l_1255 = &g_829;
    union U1 ***l_1263 = &g_795[0];
    uint8_t l_1303 = 0xF7L;
    int32_t *l_1321 = &l_1196[0][5][3];
    uint32_t * const **l_1373[1];
    int16_t ***l_1386 = &g_1233;
    struct S0 l_1391 = {0x7EE03831L,18446744073709551615UL,0xA1CBC468L,0x8DL,0xAE817BDDL,0xC3L};
    const int32_t l_1413 = 0L;
    int32_t ***l_1451 = &g_93[3];
    union U1 l_1540 = {8UL};
    int64_t *l_1583 = &g_87;
    uint64_t ** const l_1693 = (void*)0;
    int32_t l_1747 = 0x9E3AED8FL;
    uint64_t l_1752 = 0x865422F8229359AELL;
    uint8_t **l_1770 = &g_1510[3][1];
    int32_t *l_1795 = &l_1185;
    int32_t l_1848[5];
    int8_t l_1869 = 0xEBL;
    uint32_t l_1931 = 0x43BB3191L;
    const uint16_t *l_1954 = (void*)0;
    struct S0 *****l_1975 = &g_1042;
    int32_t l_1980 = (-1L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1175[i] = 1L;
    for (i = 0; i < 5; i++)
        l_1225[i] = 0x16B806FDL;
    for (i = 0; i < 1; i++)
        l_1373[i] = &g_511;
    for (i = 0; i < 5; i++)
        l_1848[i] = 0x8F451B03L;
    return g_545[4][0];
}



static union U1  func_20(int64_t  p_21, uint8_t  p_22)
{ 
    int64_t l_952 = (-6L);
    int32_t l_957[2];
    struct S0 *l_973 = (void*)0;
    struct S0 **l_972 = &l_973;
    int32_t *l_1084 = &g_74;
    int64_t l_1091 = 1L;
    int32_t l_1094[5] = {3L,3L,3L,3L,3L};
    int8_t l_1122[7][5][1] = {{{0x55L},{1L},{0x55L},{1L},{0x55L}},{{1L},{0x55L},{1L},{0x55L},{1L}},{{0x55L},{1L},{0x55L},{1L},{0x55L}},{{1L},{0x55L},{1L},{0x55L},{1L}},{{0x55L},{1L},{0x55L},{1L},{0x55L}},{{1L},{0x55L},{1L},{0x55L},{1L}},{{0x55L},{1L},{0x55L},{1L},{0x55L}}};
    int32_t l_1124 = (-9L);
    int16_t l_1125 = 8L;
    struct S0 l_1129 = {0xD4F6709CL,0x6D8F0B5D4826FA45LL,0L,0x0BL,-7L,0x7BL};
    const int8_t *l_1157 = &g_1004;
    const int8_t **l_1156 = &l_1157;
    int8_t l_1162[4] = {0x50L,0x50L,0x50L,0x50L};
    union U1 l_1163 = {0x320AL};
    union U1 *l_1165 = &g_626[1][2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_957[i] = 0x961640D5L;
    for (g_402 = 0; (g_402 <= 3); g_402 += 1)
    { 
        int32_t *l_953 = &g_74;
        int32_t **l_954 = &g_94;
        int32_t l_956 = 0x2BF470C8L;
        int8_t l_958 = 0xFEL;
        int32_t l_959 = 0xC231BC07L;
        int32_t l_960 = 1L;
        int32_t l_961[4][5][1] = {{{0L},{5L},{0L},{5L},{0L}},{{5L},{0L},{5L},{0L},{5L}},{{0L},{5L},{0L},{5L},{0L}},{{5L},{0L},{5L},{0L},{5L}}};
        uint32_t l_962 = 0UL;
        struct S0 l_986 = {0UL,0xDC33CB0354F6C121LL,0x9E59361BL,7UL,-1L,0x75L};
        uint64_t l_1007 = 0x6D00C2C14EC37133LL;
        int i, j, k;
        if (l_952)
            break;
        (*l_954) = l_953;
        for (g_829.f0 = 0; (g_829.f0 <= 3); g_829.f0 += 1)
        { 
            int32_t *l_955[1];
            int64_t l_1006 = 0L;
            int i;
            for (i = 0; i < 1; i++)
                l_955[i] = (void*)0;
            l_962++;
            for (g_829.f5 = 0; (g_829.f5 <= 3); g_829.f5 += 1)
            { 
                union U1 *l_965 = (void*)0;
                union U1 **l_966 = (void*)0;
                union U1 **l_967 = &g_694[0][0];
                int32_t l_983[4];
                int32_t l_1005[6][5] = {{0xC2D3EE73L,0x8702192EL,0x8CB4CD1EL,1L,0x0DCF7B33L},{0xD828592EL,0x8CB4CD1EL,(-1L),0x8CB4CD1EL,0xD828592EL},{1L,0x8702192EL,1L,0xD828592EL,8L},{1L,8L,0x0DCF7B33L,(-8L),(-8L)},{0xD828592EL,0x5116FA75L,0xD828592EL,0x8702192EL,8L},{0xC2D3EE73L,(-8L),8L,0x8702192EL,0xD828592EL}};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_983[i] = 0xBB1DE538L;
                (*l_967) = l_965;
            }
        }
    }
    for (g_89 = 4; (g_89 == 9); ++g_89)
    { 
        int32_t l_1033 = 0xA4B32AF1L;
        int32_t ** const *l_1060[6];
        struct S0 ****l_1073 = &g_1043;
        int32_t l_1123 = 0xBF792E29L;
        uint64_t l_1126 = 0UL;
        union U1 l_1143 = {65535UL};
        union U1 *l_1164 = &l_1143;
        int i;
        for (i = 0; i < 6; i++)
            l_1060[i] = &g_93[3];
        for (p_22 = 0; (p_22 < 12); ++p_22)
        { 
            uint8_t l_1020 = 0x2CL;
            int32_t l_1063 = 0xE64749FBL;
            int32_t l_1066[7] = {0xC4334DFBL,0xC4334DFBL,0x16FE3E2EL,0xC4334DFBL,0xC4334DFBL,0x16FE3E2EL,0xC4334DFBL};
            uint32_t ** const **l_1087 = (void*)0;
            union U1 l_1093 = {0xC877L};
            uint8_t l_1112 = 252UL;
            int32_t *l_1118 = (void*)0;
            uint8_t l_1119 = 0xDFL;
            int i;
            for (g_170.f1 = 24; (g_170.f1 <= 45); g_170.f1 = safe_add_func_uint32_t_u_u(g_170.f1, 8))
            { 
                int32_t *l_1016 = &l_957[0];
                int32_t *l_1017 = &g_56;
                int32_t *l_1018 = &l_957[1];
                int32_t *l_1019[5] = {&g_56,&g_56,&g_56,&g_56,&g_56};
                uint16_t *l_1025[7] = {&g_626[2][3].f3,&g_626[2][3].f3,&g_626[2][3].f3,&g_626[2][3].f3,&g_626[2][3].f3,&g_626[2][3].f3,&g_626[2][3].f3};
                int16_t *l_1032 = &g_159;
                uint64_t *l_1034 = &g_829.f1;
                uint64_t *l_1035 = &g_298;
                int i;
                if (l_957[1])
                    break;
                l_1020--;
                (*l_1017) = (safe_lshift_func_uint8_t_u_u(((((*l_1035) |= ((*l_1034) = ((((0L != (65531UL >= (--g_77))) , g_69) == p_22) >= (safe_add_func_int64_t_s_s(((safe_div_func_int16_t_s_s((((*l_1032) |= p_22) < g_170.f4), 65526UL)) , g_1004), l_1033))))) && l_1033) || 0x1098L), l_957[1]));
            }
            for (g_1004 = (-19); (g_1004 == (-1)); ++g_1004)
            { 
                struct S0 ***l_1040 = &l_972;
                struct S0 ****l_1039 = &l_1040;
                struct S0 *****l_1038 = &l_1039;
                int32_t ****l_1061 = &g_103[1][3][2];
                int16_t *l_1064 = &g_755[2];
                uint16_t l_1065 = 65529UL;
                int32_t l_1113 = 0xC873DD10L;
                int32_t l_1116 = (-6L);
                g_1041 = l_1038;
            }
            if (p_22)
                break;
            --l_1119;
        }
        l_1126--;
        (***g_1043) = l_1129;
        (*l_1084) = (l_957[1] ^= ((((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s((~(((safe_mul_func_uint16_t_u_u((!(safe_mul_func_uint16_t_u_u(p_22, g_298))), g_204)) ^ (0x359D28F4L && (!((safe_rshift_func_uint16_t_u_s(p_21, 2)) | g_77)))) || ((((*l_1084) ^ 9L) , l_1143) , 0x7AC15C3B35C90251LL))), 12)) == g_90), (*l_1084))) != (*l_1084)) , 0x20L) ^ g_28.f0));
        l_1165 = ((((safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(p_21, ((0x77CA325816C57CC8LL && (safe_lshift_func_int16_t_s_s(((*l_1084) = (*l_1084)), ((safe_mul_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(((((safe_add_func_uint64_t_u_u(p_21, (((l_1156 == (((safe_add_func_uint64_t_u_u(18446744073709551607UL, (safe_div_func_uint32_t_u_u((18446744073709551614UL > l_1162[2]), 0x24B3BBEDL)))) & 0xFAL) , &l_1157)) != 4294967286UL) >= g_829.f1))) ^ 0xB1L) && p_21) || g_82), 0xC6B5L)) , (**l_1073)) != (**l_1073)), 1UL)) | p_21)))) , g_204))), p_22)) , (**g_1044)) , l_1163) , l_1164);
    }
    return l_1163;
}



static int32_t  func_23(const union U1  p_24, int32_t  p_25, uint32_t  p_26, struct S0  p_27)
{ 
    const struct S0 ****l_949 = &g_588;
    const struct S0 *****l_948 = &l_949;
    int32_t l_950 = 0x214DF7CDL;
    (*l_948) = &g_588;
    return l_950;
}



static uint64_t  func_31(union U1  p_32)
{ 
    uint64_t l_58 = 18446744073709551614UL;
    int32_t l_581 = (-10L);
    uint8_t l_585[2][5][6] = {{{0x95L,0x2AL,3UL,0x95L,5UL,5UL},{0x94L,0x2AL,0x2AL,0x94L,5UL,3UL},{4UL,0xD2L,0x18L,3UL,0x18L,0xD2L},{5UL,0xD2L,253UL,5UL,0x18L,0x18L},{0x2AL,0xD2L,0xD2L,0x2AL,0x18L,253UL}},{{3UL,0xD2L,0x18L,3UL,0x18L,0xD2L},{5UL,0xD2L,253UL,5UL,0x18L,0x18L},{0x2AL,0xD2L,0xD2L,0x2AL,0x18L,253UL},{3UL,0xD2L,0x18L,3UL,0x18L,0xD2L},{5UL,0xD2L,253UL,5UL,0x18L,0x18L}}};
    int32_t **l_597[6] = {(void*)0,&g_94,&g_94,(void*)0,&g_94,&g_94};
    int32_t l_600[4][2] = {{0xEAD10162L,0xEAD10162L},{0xEAD10162L,0xEAD10162L},{0xEAD10162L,0xEAD10162L},{0xEAD10162L,0xEAD10162L}};
    union U1 *l_625 = &g_626[2][3];
    struct S0 l_644 = {4294967291UL,0x32A3B3DDA2D323D5LL,-1L,0UL,-2L,1L};
    uint32_t l_690 = 0x826761BCL;
    uint32_t *l_783 = (void*)0;
    uint32_t **l_782 = &l_783;
    uint32_t ***l_781 = &l_782;
    int32_t l_789 = (-1L);
    uint16_t l_828 = 65535UL;
    const int16_t l_855 = 0x0696L;
    int8_t *l_918 = &g_545[4][0];
    uint8_t l_931 = 0xA7L;
    union U1 ****l_940 = (void*)0;
    union U1 ***l_942 = (void*)0;
    union U1 ****l_941[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int32_t *l_944 = &g_56;
    int32_t *l_945[3][5] = {{&l_789,(void*)0,&l_789,(void*)0,&l_789},{&l_581,&l_581,&l_581,&l_581,&l_581},{&l_789,(void*)0,&l_789,(void*)0,&l_789}};
    int i, j, k;
    for (p_32.f2 = 0; (p_32.f2 >= 44); p_32.f2 = safe_add_func_uint16_t_u_u(p_32.f2, 2))
    { 
        const int32_t l_42 = 1L;
        uint32_t l_59 = 0x8B108A66L;
        int32_t l_554 = 0L;
        uint32_t l_577 = 7UL;
        int32_t l_584 = 0xFF5D8E9BL;
        uint16_t *l_642 = &g_626[2][3].f3;
        uint64_t l_643 = 0x71F2C31C1899A43FLL;
        uint32_t **l_646 = (void*)0;
        union U1 l_699 = {65533UL};
        int32_t l_718 = 0x2409AE97L;
        int8_t l_744[5][3][5] = {{{0x53L,(-1L),0x90L,(-1L),0x53L},{0xB7L,0x6CL,0x89L,0xF2L,1L},{(-4L),0x6AL,0xB7L,3L,0x6AL}},{{0xA7L,(-1L),(-1L),0x6CL,1L},{(-1L),3L,0x23L,8L,0x53L},{1L,(-8L),0xB7L,0xA7L,0xA1L}},{{(-1L),0x3AL,0L,0xA7L,0xA7L},{0x3EL,0x92L,0x3EL,8L,1L},{(-4L),0xA1L,(-1L),0x6CL,0xF2L}},{{3L,1L,0xFAL,3L,0xA7L},{0x23L,3L,(-1L),0xF2L,0x3AL},{0x53L,(-1L),0x3EL,(-1L),0x23L}},{{3L,0x6CL,0L,1L,1L},{0x89L,0x6CL,0xB7L,0xB7L,0x6CL},{0xA7L,(-1L),0x23L,0x6CL,(-8L)}}};
        int32_t * const *l_752 = &g_751[1][1];
        const uint32_t *l_778 = &g_748;
        const uint32_t **l_777 = &l_778;
        const uint32_t ***l_776[7] = {(void*)0,(void*)0,&l_777,(void*)0,(void*)0,&l_777,(void*)0};
        const struct S0 l_791 = {4294967292UL,18446744073709551615UL,0x004B5331L,0x0DL,2L,0x52L};
        union U1 **l_796 = (void*)0;
        int i, j, k;
        for (g_11 = 0; (g_11 < 37); g_11 = safe_add_func_int16_t_s_s(g_11, 9))
        { 
            struct S0 l_48 = {0x6C28CBD6L,0xD538770CE404D464LL,-10L,1UL,0x9BE99B96L,0xC7L};
            int32_t *l_55 = &g_56;
            int8_t *l_57[2];
            int32_t l_579 = 0x85CEB02AL;
            const struct S0 ***l_592 = (void*)0;
            uint32_t * const *l_623 = (void*)0;
            int32_t l_624 = 1L;
            int i;
            for (i = 0; i < 2; i++)
                l_57[i] = (void*)0;
            (*l_55) = func_37((l_42 > 0x6982B357F039D3CDLL), (func_43(l_48, ((safe_mod_func_int16_t_s_s((l_42 == g_28.f3), (250UL || (l_58 |= (safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((((((*l_55) = (p_32.f2 < g_28.f3)) | p_32.f3) == l_42) , p_32.f0), g_11)), p_32.f2)))))) > 248UL), l_59, g_28.f0) , p_32.f0), l_59, g_28.f0);
            if ((((**g_511) ^ ((((((p_32.f2 < ((safe_add_func_uint8_t_u_u(247UL, g_159)) >= (safe_add_func_int32_t_s_s(((*l_55) = ((-3L) <= (l_554 = 65535UL))), ((safe_mul_func_int8_t_s_s(l_59, l_58)) > g_28.f3))))) < 253UL) & 0x0052L) , p_32.f2) < l_59) <= 0x0865CBF7AA0F46BCLL)) != l_58))
            { 
                int32_t *l_557[5][2][7] = {{{&g_74,&g_74,&g_56,&g_74,&g_56,&g_74,&g_74},{&g_56,(void*)0,(void*)0,&l_554,(void*)0,&l_554,(void*)0}},{{&g_74,&g_74,(void*)0,&g_74,&g_74,(void*)0,&g_74},{(void*)0,&l_554,&l_554,(void*)0,&g_74,&g_56,(void*)0}},{{&g_56,&g_56,(void*)0,(void*)0,&g_56,&g_56,(void*)0},{&l_554,(void*)0,(void*)0,&g_56,&g_56,(void*)0,(void*)0}},{{&g_56,(void*)0,&g_56,&g_56,(void*)0,(void*)0,&g_56},{&g_56,(void*)0,&g_56,&g_74,(void*)0,&l_554,&l_554}},{{&g_74,&g_56,&g_74,&g_56,&g_74,&g_74,&g_74},{&g_56,&l_554,&g_74,&g_56,&g_74,&l_554,&g_56}}};
                int i, j, k;
                (*l_55) = (l_554 ^= (*l_55));
                for (l_48.f2 = (-23); (l_48.f2 == (-7)); l_48.f2 = safe_add_func_uint16_t_u_u(l_48.f2, 8))
                { 
                    uint32_t l_575[6][7] = {{18446744073709551609UL,0x99E77497L,18446744073709551609UL,18446744073709551609UL,0x99E77497L,18446744073709551609UL,18446744073709551609UL},{0xE311C17CL,18446744073709551615UL,0xD2E60316L,18446744073709551615UL,0xE311C17CL,18446744073709551615UL,0xE311C17CL},{0x99E77497L,18446744073709551609UL,18446744073709551609UL,0x99E77497L,18446744073709551609UL,18446744073709551609UL,0x99E77497L},{0x1409B291L,18446744073709551615UL,0x1409B291L,7UL,0xE311C17CL,7UL,0x1409B291L},{0x99E77497L,0x99E77497L,0xEF93D842L,0x99E77497L,0x99E77497L,0xEF93D842L,0x99E77497L},{0xE311C17CL,7UL,0x1409B291L,18446744073709551615UL,0x1409B291L,7UL,0xE311C17CL}};
                    uint64_t *l_576 = &g_298;
                    uint16_t *l_578 = &g_77;
                    int32_t l_580 = (-1L);
                    int32_t l_582 = 0L;
                    int32_t l_583 = (-4L);
                    const struct S0 ****l_591[5][7][1];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_591[i][j][k] = &g_588;
                        }
                    }
                    (*l_55) = (l_579 |= (safe_rshift_func_uint16_t_u_u(p_32.f3, ((*l_578) = (((*l_576) &= ((l_554 ^= (safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((0x5A149CCBL == (safe_mul_func_uint8_t_u_u(((0x72586CD8A32D755DLL != (0L < ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((((!(((safe_div_func_int32_t_s_s(p_32.f0, (-1L))) == (-7L)) == 0x7DL)) || g_87) , p_32.f0) | l_575[2][0]), g_170.f5)), p_32.f3)) || 0x5368L))) >= 0L), l_575[5][5]))), (*l_55))), (*l_55)))) >= l_58)) == l_577)))));
                    (*l_55) &= l_58;
                    l_585[0][4][5]--;
                    l_592 = (g_588 = g_588);
                    l_583 = ((((*l_55) = (safe_add_func_uint16_t_u_u(1UL, (0xCDL == (((p_32.f2 | (**g_511)) , l_597[5]) == &l_55))))) ^ (((safe_mul_func_int8_t_s_s((((((g_402 , p_32.f3) | l_600[0][1]) && g_545[4][4]) , 6UL) || p_32.f2), 1L)) != g_77) && 18446744073709551615UL)) < 0x37C2L);
                }
                for (g_170.f1 = (-6); (g_170.f1 <= 34); ++g_170.f1)
                { 
                    uint16_t *l_619 = &g_77;
                    int16_t *l_622 = &g_159;
                    l_584 ^= ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(p_32.f3, (((**g_511) = ((safe_add_func_uint32_t_u_u(0UL, (safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_28.f0, (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s(((*l_619)--), ((*l_622) = p_32.f3))) || ((*l_622) = g_492)), ((void*)0 != l_623))))), (*l_55))))) , p_32.f3)) > l_624))), p_32.f0)), g_90)) >= g_204);
                }
            }
            else
            { 
                union U1 **l_627 = &l_625;
                (*l_627) = l_625;
                return g_195;
            }
        }
        if (((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(p_32.f0, ((l_643 = (safe_add_func_int64_t_s_s((((safe_add_func_int64_t_s_s((safe_mul_func_int32_t_s_s(p_32.f3, ((-1L) != 0UL))), ((g_545[1][2] < p_32.f2) , ((((*l_642) = ((l_584 = (((l_577 < p_32.f0) , p_32.f2) , p_32.f3)) | 0x7F6DB7BDL)) <= g_545[0][0]) | p_32.f0)))) != 0x7EL) || p_32.f2), p_32.f2))) & 0xC7B3431BL))) | g_170.f3), 0x34F684ADL)) & (-3L)), p_32.f3)), g_170.f2)) , p_32.f3))
        { 
            if (p_32.f2)
                break;
        }
        else
        { 
            int32_t * const *l_651 = &g_94;
            int32_t l_659 = 0xF6E370B9L;
            int32_t l_687 = 0L;
            int32_t l_688 = 0xA87AA054L;
            int32_t l_689 = (-1L);
            union U1 *l_693 = (void*)0;
            uint64_t l_745 = 18446744073709551613UL;
            int32_t **l_754 = &g_751[0][3];
            int32_t *l_790 = &l_584;
            for (g_170.f2 = 0; (g_170.f2 <= 1); g_170.f2 += 1)
            { 
                struct S0 *l_645 = &l_644;
                uint16_t l_653 = 8UL;
                int8_t *l_658 = &g_545[1][5];
                uint64_t *l_660 = &l_643;
                int32_t *l_686[1][6][4] = {{{&l_584,&l_600[0][1],(void*)0,&l_600[0][1]},{&l_581,(void*)0,&l_659,(void*)0},{&l_659,(void*)0,&l_581,&l_600[0][1]},{(void*)0,&l_600[0][1],&l_584,&l_659},{&l_600[2][1],&l_554,&l_554,&l_600[2][1]},{&l_600[2][1],&l_600[0][1],&l_584,&l_581}}};
                int i, j, k;
                (*l_645) = l_644;
                if ((l_584 &= (l_646 != (((*l_660) = (p_32.f3 >= (l_659 = (safe_rshift_func_int8_t_s_u(((*l_658) = (((l_600[(g_170.f2 + 2)][g_170.f2] = (safe_lshift_func_int16_t_s_s((l_651 != (void*)0), (safe_unary_minus_func_uint32_t_u(p_32.f0))))) <= l_653) || (safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(18446744073709551615UL, 1L)), l_577)))), 0))))) , (void*)0))))
                { 
                    int32_t l_669 = 0xEADEEE7CL;
                    int8_t *l_684 = &g_82;
                    int32_t l_685[5][3][5] = {{{0L,(-5L),0xAA14B471L,0xAA14B471L,(-5L)},{0xEA7E4E29L,0xA68DA365L,0xAA094BA6L,0x8521A851L,(-9L)},{0xFB0C8675L,(-5L),1L,(-5L),0xFB0C8675L}},{{0xAA094BA6L,0xBB536695L,(-4L),0xFBEFFCCAL,0x25147C85L},{0xFB0C8675L,0x110119E8L,0x110119E8L,0xFB0C8675L,0xAA14B471L},{0xEA7E4E29L,0L,0xC03BB6BFL,0xBB536695L,0x25147C85L}},{{0L,0xFB0C8675L,0L,0xAA14B471L,0xFB0C8675L},{0x25147C85L,0xA68DA365L,(-9L),0xBB536695L,(-9L)},{0xCADEE236L,0xCADEE236L,1L,0xFB0C8675L,(-5L)}},{{0xAA094BA6L,0x8521A851L,(-9L),0xFBEFFCCAL,0xEA7E4E29L},{(-5L),0x110119E8L,0L,(-5L),0xAA14B471L},{0x065B9EDEL,0x8521A851L,0xC03BB6BFL,0x8521A851L,0x065B9EDEL}},{{0L,0xCADEE236L,0x110119E8L,0xAA14B471L,0xCADEE236L},{0x065B9EDEL,0xA68DA365L,(-4L),0L,(-9L)},{(-5L),0xFB0C8675L,1L,0xCADEE236L,0xCADEE236L}}};
                    int i, j, k;
                    l_659 ^= (!(safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((~(65535UL != (g_170.f4 , l_669))), g_56)), (safe_mod_func_int32_t_s_s((g_626[2][3] , (g_164 <= (safe_rshift_func_uint8_t_u_s(0x07L, 1)))), l_600[(g_170.f2 + 2)][g_170.f2])))), l_669)));
                    l_685[2][1][4] |= ((((safe_rshift_func_uint16_t_u_u((g_545[4][0] == (0xD202L || (((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(((*l_660) = ((((*l_684) = ((l_584 ^ (safe_rshift_func_int16_t_s_u((p_32.f2 >= (5UL ^ ((0xFEA6B8C3BB58AF02LL && 0x52DB7E4A04197EA2LL) || l_669))), 2))) && p_32.f2)) && p_32.f0) , p_32.f3)), 2L)) || 65535UL), g_87)) == (-6L)) <= p_32.f0))), 13)) | 0xA3L) || (-5L)) != 0UL);
                }
                else
                { 
                    int32_t l_695 = 1L;
                    l_686[0][4][0] = &l_584;
                    ++l_690;
                    g_694[0][0] = l_693;
                    if (l_695)
                        continue;
                }
            }
            if (l_643)
                continue;
            for (l_659 = 0; (l_659 > (-25)); l_659 = safe_sub_func_uint16_t_u_u(l_659, 2))
            { 
                struct S0 *l_698 = &l_644;
                uint64_t *l_716 = (void*)0;
                uint64_t *l_717 = &l_644.f1;
                int16_t *l_719 = &g_159;
                int32_t l_720[4];
                int8_t *l_721 = &g_492;
                int32_t l_746 = 0xB86F2CBEL;
                int32_t ***l_753[6][5][5] = {{{&g_93[3],&g_93[3],&l_597[4],&g_93[3],&l_597[5]},{&g_93[1],(void*)0,(void*)0,&g_93[3],&l_597[5]},{&g_93[3],&l_597[5],&g_93[0],&l_597[5],(void*)0},{(void*)0,&l_597[5],(void*)0,&l_597[5],(void*)0},{&g_93[3],&l_597[5],&l_597[4],&l_597[4],&l_597[5]}},{{&g_93[2],&l_597[5],&g_93[3],&g_93[1],&g_93[3]},{(void*)0,(void*)0,&g_93[3],&g_93[3],&g_93[3]},{(void*)0,&g_93[2],&g_93[3],(void*)0,&g_93[3]},{(void*)0,&l_597[5],&l_597[5],&g_93[3],&l_597[4]},{&g_93[2],&l_597[1],&l_597[1],&g_93[2],&g_93[3]}},{{&g_93[3],&l_597[5],&l_597[5],(void*)0,&l_597[0]},{(void*)0,&g_93[3],&g_93[2],(void*)0,&l_597[5]},{&g_93[3],&g_93[3],(void*)0,(void*)0,(void*)0},{&g_93[1],&g_93[3],&l_597[5],&g_93[2],&l_597[5]},{&l_597[4],&l_597[4],&l_597[5],&g_93[3],&g_93[3]}},{{&l_597[5],(void*)0,&l_597[5],(void*)0,&g_93[2]},{&l_597[5],&g_93[0],&l_597[5],&g_93[3],&l_597[3]},{&g_93[3],(void*)0,(void*)0,&g_93[1],&g_93[2]},{&g_93[3],&l_597[4],&g_93[3],&l_597[4],&g_93[3]},{&l_597[0],&g_93[3],&g_93[3],&l_597[5],&g_93[2]}},{{&l_597[4],&g_93[3],(void*)0,&l_597[5],&g_93[3]},{&g_93[3],&g_93[3],(void*)0,&g_93[3],&g_93[2]},{&l_597[3],&l_597[5],&l_597[4],&g_93[3],&g_93[3]},{&g_93[2],&l_597[1],&g_93[2],&l_597[0],&g_93[2]},{&l_597[3],&l_597[5],(void*)0,&l_597[4],&l_597[3]}},{{&l_597[1],&g_93[2],(void*)0,&g_93[3],&g_93[2]},{&l_597[2],(void*)0,(void*)0,&l_597[3],&g_93[3]},{(void*)0,&l_597[5],&g_93[2],&g_93[2],&l_597[5]},{(void*)0,&l_597[5],&l_597[4],&l_597[3],(void*)0},{&g_93[3],&l_597[5],(void*)0,&l_597[1],&l_597[5]}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_720[i] = 0x6A31024FL;
                (*l_698) = l_644;
                if (((g_626[2][3].f0 , (((*l_721) = ((l_699 , (safe_div_func_int32_t_s_s(((p_32.f2 < ((g_170.f5 >= (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((*l_719) = (safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(((l_643 , p_32.f0) | ((*l_717) |= 18446744073709551609UL)), 0x1659L)), 11)), 0)) && 0x7FD8L) <= 0L) , l_718) , 0L), p_32.f0)) && 1UL), 0))), g_74)) >= g_626[2][3].f3), l_699.f3))) == 0x9758BBE7L)) | l_720[3]), l_699.f3))) && l_720[3])) > g_626[2][3].f3)) , l_699.f0))
                { 
                    struct S0 * const l_727 = &g_170;
                    int64_t *l_743[3][3] = {{&g_87,&g_87,&g_87},{&l_699.f1,&l_699.f1,&l_699.f1},{&g_87,&g_87,&g_87}};
                    int32_t l_747 = 0L;
                    int i, j;
                    if (p_32.f3)
                        break;
                    l_746 = (safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u(((g_726 = &g_253) == (((*l_719) &= ((l_727 == &l_644) || ((safe_sub_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s(((p_32.f3 >= (safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((*g_512), (+(safe_lshift_func_uint16_t_u_u(((0x26D3L != ((((l_720[3] |= 0L) , 18446744073709551615UL) >= g_69) != l_744[1][2][3])) , p_32.f2), 1))))) , (void*)0) != (void*)0), p_32.f0)) && p_32.f0), 9L)) ^ l_718), 1))) & l_688), g_202)) , (**g_511)) | p_32.f0) != 9UL), p_32.f0)) | l_745))) , (void*)0)), p_32.f3)) && p_32.f2), (-1L)));
                    ++g_748;
                    g_751[0][3] = &l_747;
                    (*l_727) = (*l_698);
                }
                else
                { 
                    if (l_746)
                        break;
                }
                l_584 = ((g_204 , (l_752 != (l_754 = l_597[5]))) , ((((*l_719) = (-2L)) == 0x827CL) >= ((*l_717) = g_755[2])));
            }
            for (l_659 = 0; (l_659 != 21); l_659 = safe_add_func_uint64_t_u_u(l_659, 1))
            { 
                const uint32_t ****l_779 = (void*)0;
                const uint32_t ****l_780 = &l_776[6];
                int32_t l_784 = (-1L);
                int32_t l_788 = 0x35D2B8F1L;
                if ((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(p_32.f3, 1L)), (safe_lshift_func_uint16_t_u_s(65535UL, (safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(0x44L, 0xD6L)) == ((((*l_780) = l_776[0]) == l_781) || 0x8484162DL)), 0x98L)) == l_784), p_32.f3)), g_170.f4)))))), 250UL)), l_784)))
                { 
                    uint8_t l_787 = 6UL;
                    l_788 |= (l_787 = (safe_lshift_func_uint16_t_u_s(((*l_642) ^= 0x8CF3L), 10)));
                    if (l_789)
                        continue;
                    l_790 = &l_788;
                }
                else
                { 
                    return p_32.f0;
                }
                l_788 = 0x6739ED8EL;
                for (l_699.f1 = 0; (l_699.f1 <= 3); l_699.f1 += 1)
                { 
                    struct S0 *l_792 = &l_644;
                    union U1 **l_794 = &g_694[0][0];
                    union U1 ***l_793[4][3];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_793[i][j] = &l_794;
                    }
                    (*l_792) = l_791;
                    l_796 = (g_795[0] = &g_694[1][0]);
                    g_694[l_699.f1][l_699.f1] = g_694[l_699.f1][l_699.f1];
                    (*l_790) = (l_554 = p_32.f0);
                }
            }
        }
        for (g_170.f5 = 5; (g_170.f5 >= 0); g_170.f5 -= 1)
        { 
            int32_t l_824 = 0x211079E0L;
            int8_t *l_825 = &l_744[3][0][3];
            int32_t l_842 = 0xC62A6238L;
            struct S0 l_883 = {0UL,18446744073709551615UL,0xE4F7F990L,0x2DL,0x25B2C5C2L,1L};
            l_554 &= ((safe_sub_func_int8_t_s_s(((*l_825) = (safe_add_func_int8_t_s_s(((safe_add_func_int32_t_s_s(p_32.f0, (safe_mul_func_int8_t_s_s((!((safe_div_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(p_32.f2, ((safe_mod_func_uint32_t_u_u(p_32.f2, (safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(0x1F43L, (p_32.f0 < (safe_mul_func_uint8_t_u_u((5UL <= l_824), 0UL))))), 0x60009357E4A7A212LL)))) == p_32.f2))), p_32.f0)), g_298)) | 0x64L), g_545[4][0])) != 65535UL)), 0x98L)))) && g_195), p_32.f2))), 1UL)) ^ 1UL);
            l_828 &= (safe_mod_func_int32_t_s_s(p_32.f3, l_744[0][2][1]));
            for (g_195 = 0; (g_195 <= 3); g_195 += 1)
            { 
                int32_t *l_831[6][2][7] = {{{&g_56,&l_600[1][0],&g_56,(void*)0,(void*)0,&g_56,&l_600[1][0]},{(void*)0,&l_581,&l_581,(void*)0,&l_789,&l_600[2][0],&l_789}},{{&g_56,(void*)0,(void*)0,&g_56,&l_600[1][0],&g_56,(void*)0},{&g_74,&l_600[0][1],(void*)0,(void*)0,(void*)0,&l_600[0][1],&g_74}},{{&l_581,(void*)0,&l_789,(void*)0,(void*)0,(void*)0,&g_56},{&l_581,&l_600[0][1],&l_581,&l_554,&g_74,(void*)0,&g_74}},{{&g_56,&l_581,&l_600[1][0],&l_600[1][0],&l_581,&g_56,&l_581},{&l_581,&l_554,&g_74,(void*)0,&g_74,(void*)0,&g_74}},{{(void*)0,(void*)0,&g_56,&l_600[1][0],&g_56,(void*)0,(void*)0},{(void*)0,&l_554,&l_789,&l_554,(void*)0,&l_600[2][0],&g_74}},{{&l_789,&l_581,&l_789,&g_56,&g_56,&l_789,&l_581},{&g_74,&l_600[0][1],&l_789,&l_581,&g_74,&l_554,&g_74}}};
                int32_t *l_832[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t *l_853[3];
                int16_t l_854[4] = {1L,1L,1L,1L};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_853[i] = &l_644.f5;
                for (l_699.f2 = 0; (l_699.f2 <= 3); l_699.f2 += 1)
                { 
                    struct S0 *l_830 = &l_644;
                    (*l_830) = g_829;
                }
                l_832[3] = l_831[5][1][6];
                if ((+((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((l_842 = p_32.f2), (l_854[3] ^= (safe_lshift_func_uint16_t_u_u(p_32.f2, (safe_unary_minus_func_int8_t_s((safe_unary_minus_func_uint16_t_u((~(safe_unary_minus_func_int64_t_s((((**g_511) = p_32.f3) != (safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((g_82 = ((g_170.f5 >= (0xF1D50BC12726041DLL >= g_298)) <= ((*l_825) = (p_32.f3 < g_298)))), l_824)) & 9L), 0x13FEL))))))))))))))) || p_32.f3) < p_32.f0), p_32.f2)), 0x903C2F4BL)), l_855)) , 6L)))
                { 
                    int16_t l_856 = 1L;
                    l_856 = (l_584 ^= p_32.f2);
                }
                else
                { 
                    int32_t l_857 = 0x499ACE2BL;
                    int64_t *l_867 = &l_699.f4;
                    uint8_t *l_869 = &g_11;
                    int16_t *l_881 = &g_755[2];
                    int16_t *l_882 = &g_159;
                    struct S0 *l_884 = (void*)0;
                    l_554 = (l_857 || (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((*l_882) = (safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s((((((((((g_87 &= ((l_853[0] != l_825) || p_32.f2)) , (safe_unary_minus_func_int8_t_s(((--(*l_869)) > (safe_lshift_func_int8_t_s_u(p_32.f0, (safe_unary_minus_func_int8_t_s(((+(((((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_s(((*l_881) = (((*l_825) = ((p_32.f3 >= ((**g_511) || p_32.f0)) , p_32.f3)) == l_842)), l_857)))), p_32.f3)) < p_32.f3) == g_829.f0) >= (-4L)) | (*g_512))) & p_32.f2))))))))) ^ p_32.f2) | g_402) > p_32.f0) , g_170.f3) && p_32.f3) | 0xAFL) != p_32.f0))), g_829.f2))), 10)), p_32.f2)), 2)));
                    g_829 = l_883;
                    if (p_32.f0)
                        continue;
                }
                for (l_883.f5 = 0; (l_883.f5 <= 5); l_883.f5 += 1)
                { 
                    int32_t l_885 = 0xC6F56ABAL;
                    return l_885;
                }
            }
        }
        for (g_748 = 1; (g_748 <= 4); g_748 += 1)
        { 
            uint32_t l_894 = 0x0E89C289L;
            int32_t * const l_899 = &g_56;
            int32_t l_930[3];
            int i;
            for (i = 0; i < 3; i++)
                l_930[i] = 1L;
            if (((safe_sub_func_uint8_t_u_u(p_32.f0, 0xA9L)) , (l_584 &= p_32.f0)))
            { 
                uint8_t l_888 = 0UL;
                int i, j;
                l_888 = p_32.f3;
            }
            else
            { 
                int8_t l_891 = 0x8DL;
                uint64_t l_915 = 1UL;
                for (l_644.f4 = 0; (l_644.f4 <= 3); l_644.f4 += 1)
                { 
                    uint32_t *l_895 = &l_577;
                    int32_t l_898 = 0x603CF04BL;
                    int32_t **l_900 = (void*)0;
                    int32_t **l_901 = &g_751[0][1];
                    int8_t *l_911 = (void*)0;
                    int8_t *l_912 = (void*)0;
                    int8_t *l_913 = &g_82;
                    uint8_t *l_914[3][1];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_914[i][j] = &l_585[0][4][4];
                    }
                    g_751[g_748][l_644.f4] = ((((((p_32.f0 && 0x9AL) >= (safe_mod_func_int16_t_s_s(l_891, (l_894 = (safe_rshift_func_uint16_t_u_u(0xB85EL, 14)))))) != (l_895 == (void*)0)) , 0x84CF40EFFAE7BD9DLL) && p_32.f0) , (void*)0);
                    l_898 = ((*l_625) , ((safe_rshift_func_uint8_t_u_s(g_402, 5)) & ((**g_511) = p_32.f3)));
                    (*l_901) = l_899;
                    (*l_899) = (safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((l_891 , ((*g_512) || 0x9FA27D6BL)), (((&g_77 == &g_77) && (g_829.f3 |= ((safe_unary_minus_func_uint16_t_u(((((*l_913) &= (((void*)0 == &g_694[0][0]) <= g_545[4][0])) == (*l_899)) & 18446744073709551615UL))) < 0L))) || g_402))), 2)), g_500)), (*g_512)));
                    return l_915;
                }
            }
            (*l_899) = p_32.f2;
            (*l_899) = p_32.f2;
            l_930[2] = ((safe_lshift_func_int16_t_s_u(((l_918 == l_918) <= (safe_div_func_int8_t_s_s(p_32.f2, (safe_rshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((0x62FBL <= (+((((*l_899) = (p_32.f0 && (0xC57FL | (*l_899)))) < 0x89L) , 0xB4E1L))), g_545[4][0])), p_32.f3)) != p_32.f2), p_32.f3)) < g_545[2][0]) > 65526UL), g_159))))), g_170.f0)) || g_77);
            for (l_718 = 0; (l_718 <= 4); l_718 += 1)
            { 
                int32_t *l_932 = &l_600[0][1];
                int i, j;
                if (l_931)
                    break;
                g_751[(l_718 + 2)][l_718] = l_932;
            }
        }
    }
    g_943[0] = ((safe_div_func_uint16_t_u_u((((**l_781) = (**l_781)) == ((((safe_unary_minus_func_uint8_t_u(((0xAFL <= g_170.f1) | g_298))) != (p_32.f3 | (p_32.f2 >= (((0x0C4CL < g_90) <= p_32.f0) != p_32.f3)))) || p_32.f2) , (*g_511))), p_32.f2)) , &g_795[5]);
    l_945[1][0] = l_944;
    return p_32.f2;
}



static int32_t  func_37(int32_t  p_38, int64_t  p_39, int32_t  p_40, int64_t  p_41)
{ 
    uint32_t l_117 = 1UL;
    int32_t ***l_118 = (void*)0;
    uint16_t *l_126 = (void*)0;
    int32_t l_132[5];
    uint32_t l_161 = 0x5103C868L;
    uint32_t l_165 = 0xF78AD59AL;
    uint32_t l_196 = 0x72B09FDDL;
    int8_t *l_251 = &g_82;
    int8_t **l_250 = &l_251;
    int32_t l_267 = (-3L);
    int8_t l_274 = 0x82L;
    int32_t *l_279[2];
    int32_t *l_280 = (void*)0;
    uint8_t l_287 = 0xDEL;
    struct S0 *l_328 = &g_170;
    int32_t l_339 = (-2L);
    uint64_t l_461 = 0xF2BF19C5951E3A4BLL;
    uint8_t l_475 = 0xB8L;
    union U1 l_537 = {8UL};
    int32_t l_544 = 0L;
    uint8_t l_546 = 0x43L;
    uint8_t l_547 = 0xC0L;
    int i;
    for (i = 0; i < 5; i++)
        l_132[i] = 0xF7814A76L;
    for (i = 0; i < 2; i++)
        l_279[i] = &l_132[2];
    for (p_39 = (-25); (p_39 > 3); p_39 = safe_add_func_int64_t_s_s(p_39, 7))
    { 
        const uint16_t l_116 = 65535UL;
        uint32_t * const l_124 = &g_69;
        int8_t *l_127 = &g_82;
        int32_t **l_128 = (void*)0;
        int32_t l_133 = 0x57F44240L;
        union U1 l_140 = {0x62C0L};
        int32_t l_197[2][5] = {{0x6ED117DDL,0x6ED117DDL,0x6ED117DDL,0x6ED117DDL,0x6ED117DDL},{7L,7L,7L,7L,7L}};
        uint32_t *l_205 = &g_90;
        uint32_t *l_206 = &l_196;
        struct S0 *l_207[7] = {&g_170,&g_170,&g_170,&g_170,&g_170,&g_170,&g_170};
        int32_t l_208 = 0x7ACA1423L;
        int32_t l_270[1][3];
        int16_t l_329[3][6] = {{5L,0xC539L,5L,1L,(-1L),(-1L)},{0x58BAL,5L,5L,0x58BAL,0xC539L,5L},{5L,0x58BAL,(-1L),0x58BAL,5L,1L}};
        int16_t *l_357 = &l_329[1][1];
        int64_t l_371[3];
        const union U1 *l_394 = &l_140;
        uint16_t l_536 = 65535UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_270[i][j] = 7L;
        }
        for (i = 0; i < 3; i++)
            l_371[i] = 1L;
        for (g_87 = 0; (g_87 > (-27)); g_87 = safe_sub_func_uint8_t_u_u(g_87, 3))
        { 
            uint32_t l_119 = 0xB7C33EA3L;
            int32_t *l_120 = (void*)0;
            int32_t *l_121 = &g_56;
            if (p_38)
                break;
            (*l_121) &= (((safe_lshift_func_uint16_t_u_u(((g_103[1][3][2] = (void*)0) != (void*)0), ((((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u((&g_93[3] == ((((safe_mod_func_int8_t_s_s((g_89 && l_116), p_38)) >= (l_117 || 0x7427E885L)) , p_41) , l_118)), 0x4670EA8E11CF2C33LL)), l_119)), 0x860EL)) != g_74), 0x8EL)) | 0L) || 0xACB5C8199CC8C399LL) > l_116))) ^ g_77) >= p_41);
            if (p_41)
                break;
        }
        for (p_40 = (-24); (p_40 < (-11)); p_40 = safe_add_func_int64_t_s_s(p_40, 6))
        { 
            uint8_t l_160[2][6] = {{247UL,9UL,1UL,9UL,247UL,247UL},{0xF4L,9UL,9UL,0xF4L,255UL,0xF4L}};
            int32_t l_190 = 4L;
            int32_t *l_229 = (void*)0;
            int32_t l_269 = 0L;
            int32_t l_272 = 7L;
            int32_t l_273[4] = {0x0DE0AF28L,0x0DE0AF28L,0x0DE0AF28L,0x0DE0AF28L};
            uint32_t l_275 = 1UL;
            int32_t **l_286 = &l_280;
            int16_t l_335 = 0L;
            uint32_t l_375 = 0x5B90D937L;
            int i, j;
        }
        if ((safe_add_func_int32_t_s_s(((safe_unary_minus_func_uint64_t_u((0x447B1F80L || (safe_sub_func_uint64_t_u_u(p_38, ((((safe_mul_func_int8_t_s_s((((((p_40 != g_402) & (p_41 & ((safe_lshift_func_uint16_t_u_s(1UL, p_40)) >= 18446744073709551611UL))) || 0x804F431C29B3BE91LL) > p_40) && g_170.f1), 0x6CL)) > g_28.f0) >= p_39) , g_195)))))) ^ g_204), 0x0FC6E5E1L)))
        { 
            uint8_t l_415 = 0UL;
            int32_t l_430 = 0xA07E57E0L;
            int32_t l_433 = (-2L);
            uint32_t l_436 = 0xA98F1C06L;
            int8_t * const l_477 = &g_82;
            int32_t l_495 = 1L;
            int32_t l_497 = 1L;
            int32_t l_499[3];
            int16_t l_528 = 0x0DE8L;
            int i;
            for (i = 0; i < 3; i++)
                l_499[i] = 0xB2D39F12L;
            for (l_208 = 0; (l_208 <= 0); l_208 += 1)
            { 
                const int32_t **l_424 = (void*)0;
                const int32_t *l_426[5][1] = {{(void*)0},{&g_202},{(void*)0},{&g_202},{(void*)0}};
                const int32_t **l_425 = &l_426[1][0];
                uint64_t *l_427 = (void*)0;
                uint64_t *l_428 = &g_298;
                int8_t *l_429[4][4][2] = {{{&g_82,&g_82},{(void*)0,&g_170.f5},{&g_170.f5,&l_274},{&g_170.f5,&g_170.f5}},{{&g_82,&l_274},{&g_82,&g_170.f5},{&g_170.f5,&l_274},{&g_170.f5,&g_170.f5}},{{(void*)0,&g_82},{&g_82,&g_82},{&g_82,&g_170.f5},{(void*)0,&g_170.f5}},{{&g_82,&g_82},{&g_82,&g_82},{(void*)0,&g_170.f5},{&g_170.f5,&l_274}}};
                int32_t l_431 = (-7L);
                uint8_t *l_432 = &g_170.f3;
                struct S0 *l_457 = (void*)0;
                uint16_t l_460[2][3] = {{65535UL,65535UL,65527UL},{65535UL,65535UL,65527UL}};
                struct S0 l_493 = {8UL,0x011C5F217C894555LL,-7L,0xA4L,0xC6BE9547L,-2L};
                int32_t l_494[3];
                uint32_t *l_507 = &g_195;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_494[i] = 0x7FC6D450L;
                if (((((l_270[l_208][(l_208 + 1)] |= (safe_rshift_func_int16_t_s_s(((*l_357) = (((g_204 < g_402) | p_39) > (safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((g_170.f1 &= (safe_add_func_int16_t_s_s(((l_415 ^= (safe_mod_func_int64_t_s_s(g_82, p_38))) ^ ((*l_432) = (((safe_rshift_func_int16_t_s_u(((l_431 = (safe_lshift_func_int8_t_s_s((l_430 = ((safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s((((*l_428) |= (0xAA4AL & ((((*l_425) = &p_40) != &p_40) | p_39))) == (-8L)), p_41)), 0x2149L)) && 0L)), g_11))) && 0x5DL), 11)) & p_40) && l_430))), 0x0966L))), g_170.f4)), g_204)))), p_40))) , (void*)0) != l_127) >= 0x1BL))
                { 
                    int32_t l_434 = 0L;
                    int32_t l_435 = 0x4F491E00L;
                    int i;
                    l_436--;
                }
                else
                { 
                    struct S0 **l_456 = &l_207[2];
                    struct S0 **l_458 = (void*)0;
                    struct S0 *l_459 = (void*)0;
                    int32_t l_476[1][5] = {{0x54E24FB3L,0x54E24FB3L,0x54E24FB3L,0x54E24FB3L,0x54E24FB3L}};
                    int i, j;
                    p_40 = (~((((p_38 != p_41) && (((safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s((((g_90 >= ((safe_div_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s((g_170.f5 = (((**l_250) = (safe_div_func_int64_t_s_s(0L, p_38))) ^ (((*l_456) = l_207[(l_208 + 6)]) == (l_459 = (g_87 , l_457))))), l_460[1][0])), p_38)) & 65535UL), 0x05C5L)) ^ g_28.f3)) == g_202) == p_40), l_461)), p_40)), 1L)), 0x14C5DABB08929981LL)) > g_11) > p_41)) & p_41) >= 0xDAFBA5EDL));
                    l_270[0][0] &= ((+((((l_433 = p_41) <= ((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(g_11, (safe_mod_func_uint8_t_u_u(((*l_432) = (((((((-1L) ^ ((((safe_rshift_func_int8_t_s_u((p_38 <= (safe_lshift_func_int8_t_s_u((l_436 , (safe_add_func_int32_t_s_s((l_133 = ((((g_170 , (l_475 == g_170.f1)) == l_415) ^ (-1L)) < p_40)), (-3L)))), p_39))), 3)) == l_476[0][3]) , &g_159) == (void*)0)) < 0xCCL) , 0xE0L) && 0x65L) >= g_195) <= p_40)), 1L)))) && 4UL), l_415)) >= l_476[0][3])) , (void*)0) == l_477)) | 0x4D5A5CD8A67D6D30LL);
                }
                for (l_339 = (-27); (l_339 >= (-28)); --l_339)
                { 
                    (*l_425) = &p_40;
                    (*l_425) = (void*)0;
                }
                for (l_430 = 3; (l_430 >= 0); l_430 -= 1)
                { 
                    struct S0 **l_482 = &l_328;
                    int32_t l_496 = 0x7761588AL;
                    int32_t l_498[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_498[i] = 0L;
                    (*l_425) = &l_270[l_208][(l_208 + 1)];
                    (**l_482) = ((safe_mod_func_uint32_t_u_u((l_482 == ((p_41 || (p_40 == ((g_170 , (safe_mod_func_int16_t_s_s(0x83F5L, (((~(safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((p_41 , p_38), p_40)) <= p_41) > g_28.f3), 0UL)), g_492))) < g_170.f0) || l_270[l_208][(l_208 + 1)])))) || 1L))) , (void*)0)), 0xCD0F436CL)) , l_493);
                    --g_500;
                    if (p_40)
                        continue;
                }
                for (g_69 = 0; (g_69 >= 30); ++g_69)
                { 
                    uint32_t *l_508[7][4];
                    uint32_t **l_509 = &l_507;
                    uint32_t * const **l_513 = &g_511;
                    int32_t l_516 = 1L;
                    int16_t *l_517[7];
                    int64_t l_526 = 0x600478BF7DDB4AF2LL;
                    uint8_t l_527 = 6UL;
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_508[i][j] = &g_402;
                    }
                    for (i = 0; i < 7; i++)
                        l_517[i] = &l_329[1][1];
                    if (p_40)
                        break;
                    l_494[0] |= (l_431 = ((((safe_mod_func_int8_t_s_s((p_40 >= (((((*l_509) = (l_508[3][0] = l_507)) == (void*)0) <= (-1L)) || (((safe_unary_minus_func_int16_t_s(g_159)) , 0x459AL) >= 1UL))), p_40)) || p_38) , l_497) == p_40));
                    (*l_513) = g_511;
                    l_497 ^= (p_40 = (((safe_add_func_uint8_t_u_u(p_41, (l_516 != 0x41L))) , l_517[4]) != ((((((safe_sub_func_int16_t_s_s((safe_div_func_int64_t_s_s(l_516, g_82)), (safe_mod_func_int8_t_s_s((((safe_mod_func_int8_t_s_s(p_38, g_77)) >= g_69) | l_526), p_41)))) | p_40) == 8UL) , 0xC357CDDBL) != (-6L)) , (void*)0)));
                    return l_527;
                }
            }
            if (l_528)
                break;
        }
        else
        { 
            const uint32_t l_531 = 1UL;
            l_270[0][1] ^= (safe_add_func_int32_t_s_s(((*l_394) , l_531), (((((g_159 & (safe_lshift_func_int16_t_s_u(((*l_328) , 0x1590L), (safe_rshift_func_int16_t_s_u(p_40, 5))))) < l_536) & p_39) || (**g_511)) <= p_40)));
        }
    }
    l_546 = (g_545[4][0] = ((l_537 , ((safe_lshift_func_uint16_t_u_u(1UL, (safe_sub_func_int32_t_s_s((p_40 ^= 0L), (safe_lshift_func_int8_t_s_s(((void*)0 == (*l_250)), 7)))))) || (1UL || p_39))) | l_544));
    p_40 &= 0x5870EEA7L;
    (*l_328) = g_170;
    ++l_547;
    return p_38;
}



static uint16_t  func_43(struct S0  p_44, int32_t  p_45, int32_t  p_46, uint32_t  p_47)
{ 
    int32_t *l_62 = &g_56;
    int32_t l_75[5] = {0x685266ADL,0x685266ADL,0x685266ADL,0x685266ADL,0x685266ADL};
    uint32_t l_83 = 4294967295UL;
    int i;
    for (p_44.f0 = 0; (p_44.f0 > 31); p_44.f0 = safe_add_func_uint64_t_u_u(p_44.f0, 1))
    { 
        int32_t **l_63 = &l_62;
        uint32_t *l_68[3][5] = {{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_69,&g_69,&g_69,&g_69,&g_69}};
        uint16_t l_70 = 0xC20EL;
        int32_t *l_73[1];
        uint16_t *l_76 = &g_77;
        int32_t ***l_95 = (void*)0;
        int32_t ***l_96 = &g_93[3];
        int i, j;
        for (i = 0; i < 1; i++)
            l_73[i] = &g_74;
        (*l_63) = l_62;
        if ((((**l_63) != 0L) || ((((safe_sub_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((*l_62), 1UL)) == (l_70 = 0xA2CDF274L)) >= (-2L)), ((*l_76) = ((l_75[1] = (((safe_lshift_func_int8_t_s_s(p_44.f2, 5)) && (**l_63)) ^ p_45)) || 0x224CED0FL)))) || (*l_62)) , (void*)0) == (void*)0)))
        { 
            int8_t l_78 = 0x89L;
            int32_t l_79 = 0L;
            int32_t l_80 = (-1L);
            int32_t l_81[3][5][3] = {{{0xBC3FA0E8L,0x1515025BL,5L},{0x34191097L,0x1515025BL,1L},{0x248679C0L,0x1515025BL,0x1515025BL},{0xBC3FA0E8L,0x1515025BL,0x81CC3846L},{5L,(-5L),(-8L)}},{{0x1515025BL,(-5L),(-5L)},{1L,(-5L),0x81CC3846L},{5L,(-5L),(-8L)},{0x1515025BL,(-5L),(-5L)},{1L,(-5L),0x81CC3846L}},{{5L,(-5L),(-8L)},{0x1515025BL,(-5L),(-5L)},{1L,(-5L),0x81CC3846L},{5L,(-5L),(-8L)},{0x1515025BL,(-5L),(-5L)}}};
            int i, j, k;
            --l_83;
        }
        else
        { 
            int64_t l_86 = 0xD83981A7339E942ALL;
            int32_t l_88 = 0x7D236808L;
            --g_90;
        }
        p_45 = (((g_69 = p_44.f3) ^ (&p_45 == ((*l_63) = &p_45))) & (((*l_96) = g_93[3]) != (void*)0));
    }
    return p_44.f5;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_28.f3, "g_28.f3", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_170.f0, "g_170.f0", print_hash_value);
    transparent_crc(g_170.f1, "g_170.f1", print_hash_value);
    transparent_crc(g_170.f2, "g_170.f2", print_hash_value);
    transparent_crc(g_170.f3, "g_170.f3", print_hash_value);
    transparent_crc(g_170.f4, "g_170.f4", print_hash_value);
    transparent_crc(g_170.f5, "g_170.f5", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_545[i][j], "g_545[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_626[i][j].f0, "g_626[i][j].f0", print_hash_value);
            transparent_crc(g_626[i][j].f3, "g_626[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_748, "g_748", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_755[i], "g_755[i]", print_hash_value);

    }
    transparent_crc(g_829.f0, "g_829.f0", print_hash_value);
    transparent_crc(g_829.f1, "g_829.f1", print_hash_value);
    transparent_crc(g_829.f2, "g_829.f2", print_hash_value);
    transparent_crc(g_829.f3, "g_829.f3", print_hash_value);
    transparent_crc(g_829.f4, "g_829.f4", print_hash_value);
    transparent_crc(g_829.f5, "g_829.f5", print_hash_value);
    transparent_crc(g_1004, "g_1004", print_hash_value);
    transparent_crc(g_1224, "g_1224", print_hash_value);
    transparent_crc(g_1602, "g_1602", print_hash_value);
    transparent_crc(g_1603, "g_1603", print_hash_value);
    transparent_crc(g_1668, "g_1668", print_hash_value);
    transparent_crc(g_1852, "g_1852", print_hash_value);
    transparent_crc(g_1853, "g_1853", print_hash_value);
    transparent_crc(g_1862, "g_1862", print_hash_value);
    transparent_crc(g_1969, "g_1969", print_hash_value);
    transparent_crc(g_2018, "g_2018", print_hash_value);
    transparent_crc(g_2040, "g_2040", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2075[i], "g_2075[i]", print_hash_value);

    }
    transparent_crc(g_2329, "g_2329", print_hash_value);
    transparent_crc(g_2430, "g_2430", print_hash_value);
    transparent_crc(g_2444.f0, "g_2444.f0", print_hash_value);
    transparent_crc(g_2444.f1, "g_2444.f1", print_hash_value);
    transparent_crc(g_2444.f2, "g_2444.f2", print_hash_value);
    transparent_crc(g_2444.f3, "g_2444.f3", print_hash_value);
    transparent_crc(g_2444.f4, "g_2444.f4", print_hash_value);
    transparent_crc(g_2444.f5, "g_2444.f5", print_hash_value);
    transparent_crc(g_2445, "g_2445", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
