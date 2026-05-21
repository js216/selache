// SPDX-License-Identifier: MIT
// cctest_csmith_9abd9129.c --- cctest case csmith_9abd9129 (csmith seed 2596114729)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc848c33f */

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

// Options:   -s 2596114729 -o /tmp/csmith_gen_kc3ilm3j/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   uint8_t  f1;
   uint16_t  f2;
   uint32_t  f3;
   uint8_t  f4;
   int32_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   const int32_t  f3;
   uint16_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const int32_t  f0;
};
#pragma pack(pop)

union U3 {
   struct S1  f0;
   struct S1  f1;
};


static int32_t g_3 = 0x74AA0D72L;
static int32_t g_4 = 0xC9A57B5BL;
static int32_t g_42 = (-1L);
static int16_t g_43 = 0x469FL;
static uint32_t g_44 = 0UL;
static int64_t g_51 = (-1L);
static struct S0 g_75[3] = {{254UL,0UL,65535UL,0xA325A448L,0x6BL,0xC83373E7L},{254UL,0UL,65535UL,0xA325A448L,0x6BL,0xC83373E7L},{254UL,0UL,65535UL,0xA325A448L,0x6BL,0xC83373E7L}};
static struct S0 g_76 = {254UL,0x1CL,65532UL,0xF7B2C839L,251UL,0x3EEAC61CL};
static uint8_t g_96 = 246UL;
static int32_t g_108 = 0x20CEAD84L;
static uint16_t g_122 = 65526UL;
static uint64_t g_143 = 0x2C2AFABCB02F554ALL;
static union U3 g_157 = {{0x7B7FL,0xD4062DC6L,5UL,-6L,1UL}};
static int16_t g_164 = (-1L);



static const uint16_t  func_1(void);
static uint32_t  func_7(int16_t  p_8, uint16_t  p_9, int32_t  p_10, uint16_t  p_11);
static uint8_t  func_12(uint32_t  p_13, struct S2  p_14, uint8_t  p_15, uint32_t  p_16);
static int32_t  func_19(int32_t  p_20, int64_t  p_21);




static const uint16_t  func_1(void)
{ 
    uint8_t l_2[2];
    const int32_t l_165 = (-7L);
    int i;
    for (i = 0; i < 2; i++)
        l_2[i] = 255UL;
    for (g_3 = 0; (g_3 <= 1); g_3 += 1)
    { 
        int16_t l_147 = 9L;
        for (g_4 = 0; (g_4 <= 1); g_4 += 1)
        { 
            int32_t l_17 = 0x1320F2D6L;
            struct S2 l_18 = {0x43E2F7C6L};
            int32_t l_146[3][2] = {{2L,2L},{2L,2L},{2L,2L}};
            int i, j;
            g_164 &= (safe_sub_func_uint64_t_u_u(2UL, ((l_2[g_3] < (func_7(g_3, (l_146[1][1] = (func_12((l_17 ^= (l_2[g_3] || 1L)), l_18, l_2[1], g_4) < g_3)), l_147, l_2[1]) || l_147)) < g_157.f0.f4)));
        }
    }
    return l_165;
}



static uint32_t  func_7(int16_t  p_8, uint16_t  p_9, int32_t  p_10, uint16_t  p_11)
{ 
    uint32_t l_162 = 4294967287UL;
    int32_t l_163 = 0x62DD0B5AL;
    g_75[2].f5 |= ((safe_add_func_uint64_t_u_u(((0x547D1AE7L <= ((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((p_10 , (safe_lshift_func_int8_t_s_s(((~((((g_157 , (safe_lshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((((l_162 &= 0x327732ECL) , l_162) && p_10) <= l_163), l_163)), g_75[2].f2))) || g_108) == 0x3C97L) >= g_122)) || 0xBDE5FC087B67C161LL), l_163))), g_76.f1)), l_163)) == (-5L))) > p_10), 0L)) <= p_10);
    p_10 = (-1L);
    return g_108;
}



static uint8_t  func_12(uint32_t  p_13, struct S2  p_14, uint8_t  p_15, uint32_t  p_16)
{ 
    int64_t l_28 = (-1L);
    int32_t l_29[1][5][1];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
                l_29[i][j][k] = 0xD68C2AFEL;
        }
    }
lbl_134:
    g_75[2].f5 = func_19((safe_add_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(0x5EL, 0x52L)) > g_4), (l_29[0][1][0] = (((((safe_lshift_func_uint16_t_u_u(p_14.f0, g_3)) < 0xB1L) > p_14.f0) && l_28) >= p_15)))), g_3);
    for (g_76.f0 = 0; (g_76.f0 <= 2); g_76.f0 += 1)
    { 
        int16_t l_120 = 0xE95AL;
        int32_t l_121[4];
        int i;
        for (i = 0; i < 4; i++)
            l_121[i] = 9L;
        for (g_76.f4 = 0; (g_76.f4 <= 0); g_76.f4 += 1)
        { 
            int16_t l_109 = 0x45E9L;
            g_76.f5 |= (l_109 = (!(safe_rshift_func_int16_t_s_u(((safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(g_76.f3, 0x1CA04C89L)), (g_108 ^= (safe_lshift_func_int8_t_s_u((((0xD9L | (0xC5F198F030F790E2LL ^ g_75[2].f5)) >= l_29[0][1][0]) || p_16), 2))))) & l_29[0][1][0]), g_75[2].f4))));
            for (g_76.f5 = 0; (g_76.f5 <= 0); g_76.f5 += 1)
            { 
                int i, j, k;
                l_29[g_76.f5][(g_76.f0 + 2)][g_76.f4] = 1L;
                if (l_29[g_76.f5][(g_76.f4 + 1)][g_76.f5])
                    continue;
            }
        }
        for (g_76.f4 = 0; (g_76.f4 <= 0); g_76.f4 += 1)
        { 
            int i;
            l_121[0] &= ((safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((g_44 = (p_16 = p_14.f0)), ((safe_sub_func_uint64_t_u_u(((g_76.f1 &= l_120) <= l_29[0][1][0]), (g_96 && 0x0861EEEE36A709CELL))) && l_120))), 1L)), 0x9CBCL)), l_29[0][1][0])) , 0x9FD63578L);
            g_75[0] = g_75[g_76.f0];
            if (((++g_122) | ((g_43 = ((-1L) ^ ((safe_mod_func_int8_t_s_s(((g_51 > ((((safe_rshift_func_uint8_t_u_u(0x67L, (255UL <= 0x18L))) && 3L) & g_75[g_76.f0].f1) <= g_96)) , 1L), g_75[2].f5)) >= g_76.f1))) | g_76.f1)))
            { 
                const struct S0 l_129[1] = {{0x73L,0xCFL,0x79B5L,9UL,0UL,0xF03D5EB9L}};
                int32_t l_130 = (-1L);
                int32_t l_133 = 0L;
                int i;
                g_75[1] = l_129[0];
                l_29[0][1][0] = ((255UL != (l_130 = l_129[0].f4)) , (safe_add_func_uint64_t_u_u(((p_14.f0 > 4294967295UL) & l_133), l_121[0])));
                if (l_133)
                    goto lbl_134;
            }
            else
            { 
                g_75[g_76.f0].f5 |= (g_75[2].f3 == (g_75[g_76.f0].f1 >= g_75[2].f0));
                if (p_15)
                    continue;
            }
            for (g_122 = 0; (g_122 <= 0); g_122 += 1)
            { 
                int i, j, k;
                l_121[2] |= (1UL | ((safe_lshift_func_uint16_t_u_s((((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(l_29[g_76.f4][(g_76.f4 + 4)][g_76.f4], l_29[g_122][(g_76.f4 + 3)][g_122])), (((safe_rshift_func_uint8_t_u_u(((p_13 & l_29[0][1][0]) | g_75[g_76.f0].f3), p_14.f0)) , p_14.f0) == (-8L)))) , p_13) && l_28), 7)) , g_75[2].f1));
                --g_143;
                if (l_29[0][1][0])
                    continue;
            }
        }
    }
    return l_29[0][1][0];
}



static int32_t  func_19(int32_t  p_20, int64_t  p_21)
{ 
    uint8_t l_34 = 1UL;
    int32_t l_40 = 1L;
    int32_t l_41[4];
    int i;
    for (i = 0; i < 4; i++)
        l_41[i] = 0L;
    l_40 = (safe_lshift_func_uint16_t_u_u(0x222CL, ((safe_mul_func_int16_t_s_s(l_34, g_4)) && ((+(((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_20, 0x8FL)), g_4)) & (-1L)) > 0xC67AL)) && p_21))));
    g_44--;
    for (p_20 = 15; (p_20 < 28); ++p_20)
    { 
        int16_t l_77[1];
        uint32_t l_80 = 4294967295UL;
        int i;
        for (i = 0; i < 1; i++)
            l_77[i] = 0x3174L;
        for (p_21 = 3; (p_21 >= 0); p_21 -= 1)
        { 
            int i;
            if (((safe_mod_func_int8_t_s_s((g_51 ^= l_41[p_21]), l_41[p_21])) , ((((safe_unary_minus_func_int8_t_s((safe_mul_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u(g_43, ((l_40 = p_20) >= 0x7F09L))) == 1L) | p_21) && 5L), g_44)))) >= p_21) == 0x53A6L) <= p_20)))
            { 
                const struct S0 l_73 = {247UL,0UL,0UL,9UL,249UL,0L};
                struct S0 l_74 = {0x5DL,0x65L,0x3015L,1UL,0x2AL,0x322E546EL};
                l_74 = ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(0x1BL, (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((0xE8B88BB1B5B3A04BLL >= (safe_mod_func_uint32_t_u_u((((safe_div_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(g_43, 0x92973452L)), g_4)) == g_4) & p_20), g_43))), 0x9618DE77L)) && p_20), p_21)), p_21)))) <= p_21), g_44)) , l_73);
                g_76 = (g_75[1] = g_75[2]);
            }
            else
            { 
                return g_76.f0;
            }
        }
        if ((((l_77[0] && ((g_76.f4 , l_41[3]) >= ((((((safe_sub_func_uint32_t_u_u(((g_75[2] , 0UL) < p_20), l_40)) | l_80) , g_76.f3) & p_20) >= g_76.f1) != l_77[0]))) && (-5L)) ^ 18446744073709551615UL))
        { 
            uint32_t l_85 = 0x05D9C67FL;
            int32_t l_86 = (-10L);
            int32_t l_87 = 0xE86D3611L;
            g_75[2].f5 = ((safe_add_func_int32_t_s_s((p_20 , ((l_87 = (p_21 | ((((l_86 = ((((l_40 = ((l_85 = ((safe_lshift_func_uint8_t_u_u(p_20, 4)) == ((((g_43 &= g_75[2].f2) < l_77[0]) >= 0x744A690EL) > l_77[0]))) , p_20)) || 4UL) != p_20) < l_34)) >= p_20) != l_87) , p_21))) >= (-1L))), g_44)) | 0x1CAEL);
            g_76.f5 ^= (l_40 <= ((safe_lshift_func_int16_t_s_s(p_20, (safe_mul_func_uint8_t_u_u(g_76.f0, (safe_div_func_int16_t_s_s(0x29EAL, p_21)))))) ^ l_77[0]));
        }
        else
        { 
            if (g_76.f2)
                break;
        }
        g_76.f5 = (safe_rshift_func_uint8_t_u_s((g_75[2].f1 = l_41[3]), ((((g_96 = p_21) & (safe_mul_func_int8_t_s_s((-1L), (g_3 & 0x79CEL)))) ^ 18446744073709551610UL) <= g_76.f1)));
    }
    return p_20;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_75[i].f0, "g_75[i].f0", print_hash_value);
        transparent_crc(g_75[i].f1, "g_75[i].f1", print_hash_value);
        transparent_crc(g_75[i].f2, "g_75[i].f2", print_hash_value);
        transparent_crc(g_75[i].f3, "g_75[i].f3", print_hash_value);
        transparent_crc(g_75[i].f4, "g_75[i].f4", print_hash_value);
        transparent_crc(g_75[i].f5, "g_75[i].f5", print_hash_value);

    }
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_76.f2, "g_76.f2", print_hash_value);
    transparent_crc(g_76.f3, "g_76.f3", print_hash_value);
    transparent_crc(g_76.f4, "g_76.f4", print_hash_value);
    transparent_crc(g_76.f5, "g_76.f5", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_157.f0.f0, "g_157.f0.f0", print_hash_value);
    transparent_crc(g_157.f0.f1, "g_157.f0.f1", print_hash_value);
    transparent_crc(g_157.f0.f2, "g_157.f0.f2", print_hash_value);
    transparent_crc(g_157.f0.f3, "g_157.f0.f3", print_hash_value);
    transparent_crc(g_157.f0.f4, "g_157.f0.f4", print_hash_value);
    transparent_crc(g_157.f1.f0, "g_157.f1.f0", print_hash_value);
    transparent_crc(g_157.f1.f1, "g_157.f1.f1", print_hash_value);
    transparent_crc(g_157.f1.f2, "g_157.f1.f2", print_hash_value);
    transparent_crc(g_157.f1.f3, "g_157.f1.f3", print_hash_value);
    transparent_crc(g_157.f1.f4, "g_157.f1.f4", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
