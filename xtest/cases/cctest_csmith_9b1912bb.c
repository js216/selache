// SPDX-License-Identifier: MIT
// cctest_csmith_9b1912bb.c --- cctest case csmith_9b1912bb (csmith seed 2602111675)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1dbc648c */

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

// Options:   -s 2602111675 -o /tmp/csmith_gen_bxozj4ii/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   const uint64_t  f1;
   int64_t  f2;
   int32_t  f3;
   uint16_t  f4;
};
#pragma pack(pop)

struct S1 {
   int32_t  f0;
   uint64_t  f1;
   int16_t  f2;
   uint64_t  f3;
   uint64_t  f4;
   int32_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const int16_t  f0;
   uint16_t  f1;
   struct S1  f2;
   const int8_t  f3;
   uint16_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   int8_t  f0;
   const int32_t  f1;
};
#pragma pack(pop)

union U4 {
   const int8_t  f0;
   const int8_t  f1;
};

union U5 {
   uint8_t  f0;
   int32_t  f1;
};


static uint32_t g_18[5][1][3] = {{{0UL,8UL,1UL}},{{0xFDB7B241L,8UL,0xFDB7B241L}},{{0x7D926128L,0UL,1UL}},{{0x7D926128L,0x7D926128L,0UL}},{{0xFDB7B241L,0UL,0UL}}};
static int32_t g_35 = 0x92279191L;
static int32_t g_45 = 0xD0B827BEL;
static uint16_t g_47 = 1UL;
static int64_t g_52 = 0x1F7FC01A077628D1LL;
static uint8_t g_53 = 0xF4L;
static struct S1 g_80[4][1] = {{{0L,0xF42B182C9CB7C8A0LL,1L,0xA61DCCC5F5551AFALL,0xBED93686DF8401D5LL,0x2F9B9B50L}},{{0L,0xF42B182C9CB7C8A0LL,1L,0xA61DCCC5F5551AFALL,0xBED93686DF8401D5LL,0x2F9B9B50L}},{{0L,0xF42B182C9CB7C8A0LL,1L,0xA61DCCC5F5551AFALL,0xBED93686DF8401D5LL,0x2F9B9B50L}},{{0L,0xF42B182C9CB7C8A0LL,1L,0xA61DCCC5F5551AFALL,0xBED93686DF8401D5LL,0x2F9B9B50L}}};
static int32_t g_137 = (-1L);
static int64_t g_154 = 0x6DA6D5B5E94B15D7LL;
static int64_t g_181[1] = {0x4EA56290427E704FLL};
static int64_t g_191 = (-1L);
static int32_t g_222[5] = {1L,1L,1L,1L,1L};
static uint32_t g_242 = 9UL;
static uint64_t g_247 = 0x3ABB43ABC618C9A2LL;



static uint16_t  func_1(void);
static int16_t  func_8(int64_t  p_9);
static int64_t  func_10(uint32_t  p_11);
static int32_t  func_13(uint64_t  p_14);




static uint16_t  func_1(void)
{ 
    uint32_t l_12 = 0UL;
    union U5 l_179 = {253UL};
    int32_t l_187 = 0x930543FFL;
    struct S1 l_220 = {0x1B584B13L,0x015749DF91AB292FLL,1L,0x4B629CB9F3FC713CLL,18446744073709551615UL,0x8AB57959L};
    if (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(func_8(func_10(l_12)), (safe_rshift_func_uint8_t_u_s(g_154, 5)))), g_18[2][0][2])), 11)) , g_18[2][0][2]))
    { 
        return g_53;
    }
    else
    { 
        struct S0 l_180 = {4294967295UL,1UL,-1L,0x13AA71C7L,0xE297L};
        int32_t l_184[5][4] = {{1L,0L,0L,0L},{0L,0x16147B0EL,0x18B26492L,0L},{0x18B26492L,0L,0x85D8874FL,0x85D8874FL},{4L,4L,0L,1L},{4L,0x16147B0EL,0x85D8874FL,4L}};
        int i, j;
        for (g_47 = 0; (g_47 <= 59); g_47 = safe_add_func_int16_t_s_s(g_47, 7))
        { 
            union U5 l_178 = {0UL};
            if ((((!(((((safe_lshift_func_int8_t_s_u(((g_80[0][0].f1 = (safe_mul_func_uint16_t_u_u(((((+(~(((l_179 = l_178) , g_80[0][0].f3) || (g_52 && (g_181[0] = (l_180 , l_180.f4)))))) , 0x85C304239EF3092CLL) == g_45) >= 0xA32FL), g_154))) , g_45), g_52)) != g_137) , g_18[4][0][1]) || 0x9B18L) < 0xECL)) , g_80[0][0].f5) > g_53))
            { 
                g_80[0][0] = g_80[0][0];
            }
            else
            { 
                g_80[0][0] = g_80[0][0];
                l_184[0][1] |= ((l_179.f1 = ((+(-1L)) , (((l_12 && (+((g_80[0][0].f4 && (g_35 = g_154)) > g_45))) >= l_12) <= l_180.f4))) >= 0UL);
            }
            for (l_178.f1 = 0; (l_178.f1 < (-21)); l_178.f1 = safe_sub_func_uint8_t_u_u(l_178.f1, 3))
            { 
                uint16_t l_188[5] = {65528UL,65528UL,65528UL,65528UL,65528UL};
                int i;
                g_80[0][0] = g_80[0][0];
                ++l_188[3];
            }
        }
    }
    for (l_187 = 0; (l_187 >= 0); l_187 -= 1)
    { 
        uint32_t l_192 = 18446744073709551615UL;
        int32_t l_225 = 0x4FEF692BL;
        int32_t l_237[2];
        int32_t l_244 = 0x6E9E5B7CL;
        int32_t l_246 = 0x3ADA57ACL;
        int i;
        for (i = 0; i < 2; i++)
            l_237[i] = 0x90052BFAL;
        for (g_45 = 0; (g_45 >= 0); g_45 -= 1)
        { 
            l_192--;
            for (g_47 = 0; (g_47 <= 0); g_47 += 1)
            { 
                int32_t l_195[1][4] = {{0x60CFAABEL,0x60CFAABEL,0x60CFAABEL,0x60CFAABEL}};
                int i, j, k;
                g_137 = g_18[(l_187 + 2)][g_45][(l_187 + 2)];
                l_195[0][1] ^= 0L;
                if (g_80[0][0].f2)
                    break;
            }
            if (l_187)
                continue;
            for (g_52 = 0; (g_52 >= 0); g_52 -= 1)
            { 
                struct S1 l_196 = {0xBC9F3827L,1UL,0x52BAL,18446744073709551615UL,1UL,0x5776C017L};
                l_196 = g_80[2][0];
                if (g_80[0][0].f3)
                    continue;
                if (l_192)
                    break;
            }
        }
        for (g_45 = 0; (g_45 <= 0); g_45 += 1)
        { 
            uint16_t l_197 = 65535UL;
            return l_197;
        }
        for (l_192 = 0; (l_192 <= 0); l_192 += 1)
        { 
            uint32_t l_221 = 0UL;
            uint64_t l_223 = 0x730C7F6F722B7FBFLL;
            int32_t l_224 = 1L;
            int32_t l_226[4][5][2] = {{{(-1L),(-1L)},{(-1L),0x2D218AE0L},{(-1L),(-1L)},{(-1L),0x2D218AE0L},{(-1L),(-1L)}},{{(-1L),0x2D218AE0L},{(-1L),(-1L)},{(-1L),0x2D218AE0L},{(-1L),(-1L)},{(-1L),0x2D218AE0L}},{{(-1L),(-1L)},{(-1L),0x2D218AE0L},{(-1L),(-1L)},{(-1L),0x2D218AE0L},{(-1L),(-1L)}},{{(-1L),0x2D218AE0L},{(-1L),(-1L)},{(-1L),0x2D218AE0L},{(-1L),(-1L)},{(-1L),0x2D218AE0L}}};
            int i, j, k;
            g_35 = ((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((l_226[2][2][1] = (l_225 = (l_224 = ((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(l_12, g_80[0][0].f5)) && ((l_179.f1 = (safe_mul_func_int16_t_s_s((((safe_sub_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((l_220 , (((l_12 || g_80[0][0].f0) >= l_221) || g_47)), 0xAF8CABC8L)), 9)) != 0UL), l_220.f3)), g_222[0])) <= 0UL) < l_223), g_181[0]))) >= g_18[1][0][2])), g_80[0][0].f2)), g_80[0][0].f4)) == l_223)))), l_192)), g_80[0][0].f1)) && l_220.f0);
            if (g_80[0][0].f0)
                continue;
            g_137 |= (safe_mul_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(g_18[4][0][1], (safe_sub_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((l_237[0] || (safe_add_func_int32_t_s_s(((l_179.f1 = g_80[0][0].f1) | ((safe_add_func_uint32_t_u_u((9L <= g_80[0][0].f5), l_220.f0)) || 0x1A9231A4L)), l_223))), g_242)), l_225)) || g_80[0][0].f3) ^ 4UL), l_225)))) , g_80[0][0].f4), g_80[0][0].f2));
            for (l_220.f4 = 0; (l_220.f4 <= 0); l_220.f4 += 1)
            { 
                struct S1 l_243 = {-9L,0UL,0x9F7DL,18446744073709551611UL,0UL,-1L};
                int32_t l_245[3][1][3] = {{{0x1D4C389BL,0x1D4C389BL,0x1D4C389BL}},{{0x964B708BL,(-4L),0x964B708BL}},{{0x1D4C389BL,0x1D4C389BL,0x1D4C389BL}}};
                int i, j, k;
                l_243 = l_220;
                --g_247;
            }
        }
    }
    return g_52;
}



static int16_t  func_8(int64_t  p_9)
{ 
    uint64_t l_105[4] = {0xAE2BAAC5CA8165F1LL,0xAE2BAAC5CA8165F1LL,0xAE2BAAC5CA8165F1LL,0xAE2BAAC5CA8165F1LL};
    int32_t l_136[3][4][1] = {{{0L},{0xB753B5FDL},{0L},{0xB753B5FDL}},{{0L},{0xB753B5FDL},{0L},{0xB753B5FDL}},{{0L},{0xB753B5FDL},{0L},{0xB753B5FDL}}};
    struct S3 l_160 = {-6L,0x2BF4FD87L};
    int i, j, k;
    for (g_52 = 5; (g_52 >= (-23)); g_52--)
    { 
        uint32_t l_102 = 0x15DCBD5DL;
        int32_t l_103[2];
        int32_t l_106 = 0x21C59027L;
        struct S0 l_153 = {0x9B73E171L,0x8C3A653075502811LL,0x3E0DDAC5461FDE09LL,0x777C127BL,1UL};
        int i;
        for (i = 0; i < 2; i++)
            l_103[i] = 0xC67DCA9EL;
        for (g_47 = (-28); (g_47 <= 20); g_47 = safe_add_func_int8_t_s_s(g_47, 6))
        { 
            int16_t l_104 = (-10L);
            if (g_35)
            { 
                g_80[0][0] = g_80[0][0];
            }
            else
            { 
                struct S3 l_87 = {0xA5L,0L};
                g_80[0][0] = g_80[0][0];
                g_45 ^= (((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((((l_87 , (((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((g_53 ^ ((safe_div_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(p_9, 2)), (((l_103[0] = l_102) > 4294967291UL) & 0L))), 2)), 0x69B9L)) | g_53) != p_9), l_104)) | l_87.f0)), l_105[3])), 0x3E3A24B7L)) ^ (-9L)) , 65535UL)) & 65532UL) ^ p_9) == l_104), 4UL)), 253UL)) , g_80[0][0].f0), 4294967295UL)) != g_80[0][0].f2) | l_102);
            }
        }
        if (l_105[2])
        { 
            uint16_t l_107[4][1][1];
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_107[i][j][k] = 8UL;
                }
            }
            g_45 = ((l_103[0] = 0xE5FBL) == (--l_107[1][0][0]));
            for (g_45 = 1; (g_45 >= 0); g_45 -= 1)
            { 
                int32_t l_117[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_117[i] = 0x9DBB3B7CL;
                g_35 = ((safe_mul_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(254UL, l_103[g_45])), (l_117[0] = (g_80[0][0].f2 > ((~(safe_rshift_func_uint8_t_u_u(p_9, p_9))) || 0x9983L))))) < l_105[2]);
                return l_105[2];
            }
            return p_9;
        }
        else
        { 
            struct S3 l_118 = {-1L,0x2DAA5A9DL};
            struct S2 l_135 = {-2L,0UL,{0xBBECA4C4L,3UL,1L,18446744073709551615UL,18446744073709551615UL,0L},1L,65535UL,4294967291UL};
            int32_t l_138 = 0xFA489413L;
            struct S1 l_157 = {0x3CD540B5L,0xBE330629C93A3039LL,0x2120L,0xDCF7CF008C425DF7LL,1UL,0L};
            l_138 = (l_118 , ((safe_add_func_uint16_t_u_u(((g_137 ^= (~(safe_sub_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((l_136[1][2][0] = (safe_div_func_uint16_t_u_u((((+(((g_80[0][0] , (safe_rshift_func_uint16_t_u_s((((g_80[0][0].f3 ^= g_80[0][0].f5) < ((g_18[1][0][2] , l_135) , p_9)) || g_18[3][0][2]), g_52))) | l_135.f1) ^ p_9)) & 0xC97383CBL) || p_9), p_9))) < p_9) ^ (-1L)), p_9)), p_9)) & 0L), 65528UL)))) | p_9), g_80[0][0].f2)) || l_136[2][1][0]));
            for (l_135.f2.f1 = 19; (l_135.f2.f1 == 25); l_135.f2.f1 = safe_add_func_uint32_t_u_u(l_135.f2.f1, 7))
            { 
                if (g_80[0][0].f0)
                    break;
                l_136[0][3][0] |= ((safe_mul_func_int16_t_s_s(((g_80[0][0].f3 = (safe_mod_func_int64_t_s_s((1L < (((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(0x62L, 4)), (l_153 , l_138))), g_137)) <= l_135.f2.f0) <= 4294967287UL)), g_154))) & l_135.f2.f1), 0L)) == g_80[0][0].f1);
            }
            for (l_135.f2.f5 = 0; (l_135.f2.f5 != 2); ++l_135.f2.f5)
            { 
                l_157 = (g_80[0][0] = g_80[3][0]);
                l_136[1][2][0] = (safe_div_func_uint32_t_u_u(g_52, (l_160 , ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((l_106 &= g_35), 5)), p_9)) ^ l_153.f0))));
            }
        }
    }
    g_137 = ((safe_div_func_int64_t_s_s((p_9 = ((g_80[0][0].f2 = g_80[0][0].f4) == (((l_136[1][2][0] | 0xECL) || 0x7897607B9B31375FLL) >= l_136[0][3][0]))), l_105[3])) != l_105[3]);
    return g_80[0][0].f4;
}



static int64_t  func_10(uint32_t  p_11)
{ 
    union U4 l_15 = {0x51L};
    struct S1 l_21 = {4L,0xC2273637828451D7LL,0xF172L,18446744073709551606UL,0xF1FCC1031C36B586LL,0xA66FA4BCL};
    int32_t l_22 = 0xE7CCCE1CL;
    int32_t l_23 = 0xBBDA73A1L;
    int32_t l_24 = 0x5BB5A275L;
    int32_t l_58 = (-5L);
    int8_t l_74 = 0x18L;
    int32_t l_75 = (-6L);
    g_47 |= func_13((l_24 &= (l_23 = ((l_15 , (l_22 = (((safe_add_func_int64_t_s_s((g_18[1][0][2] & (safe_mod_func_int8_t_s_s((g_18[1][0][0] == l_15.f0), g_18[3][0][0]))), l_15.f0)) , l_21) , g_18[1][0][2]))) != l_21.f2))));
    if ((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((g_53--), l_21.f4)), ((g_35 != 3L) >= (safe_add_func_int8_t_s_s(0x3EL, l_58))))))
    { 
        struct S1 l_59 = {0x466E1A5BL,0xB26F1A7E1F4FA7F9LL,1L,0x6680AE02F11925CFLL,1UL,1L};
        struct S1 l_60 = {-2L,0x67785DC571EBB702LL,0x4BA7L,18446744073709551610UL,0xCB009842105ADB56LL,0x9AF7C767L};
        l_60 = l_59;
    }
    else
    { 
        for (l_24 = 0; (l_24 != 6); l_24 = safe_add_func_int8_t_s_s(l_24, 2))
        { 
            if (p_11)
                break;
            if (p_11)
                continue;
        }
    }
    l_58 &= (l_22 ^= (l_75 = (((safe_mod_func_uint64_t_u_u((+(safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((g_18[3][0][1] , ((((((safe_rshift_func_uint8_t_u_s(((p_11 && g_47) , ((safe_add_func_uint8_t_u_u((l_15 , 1UL), l_21.f5)) < 0xC854L)), l_21.f4)) | p_11) , l_21.f0) <= l_74) > 0xEC1DL) , 5UL)), 1)), 0x354A5A86L))), l_24)) && 1UL) & g_35)));
    return p_11;
}



static int32_t  func_13(uint64_t  p_14)
{ 
    uint32_t l_34 = 0x9EFEC1A2L;
    int32_t l_44[2];
    union U4 l_46 = {0x6FL};
    int i;
    for (i = 0; i < 2; i++)
        l_44[i] = 0xB785AA1EL;
    for (p_14 = 0; (p_14 >= 17); p_14++)
    { 
        return g_18[1][0][2];
    }
    g_45 = (~(safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((l_34 > ((--p_14) >= (safe_div_func_uint8_t_u_u(((((((((g_18[4][0][2] , (((safe_lshift_func_uint8_t_u_s(((((((((((safe_add_func_int32_t_s_s((g_35 |= (l_44[0] <= g_45)), l_44[0])) <= g_18[1][0][2]) < 0x8B80BBE90AECF93ALL) , l_46) , 65535UL) & l_34) & 0UL) && g_18[0][0][2]) && 0L) && 0UL), 4)) || l_44[0]) , 0L)) || l_44[0]) & l_46.f0) , l_46.f1) ^ l_44[0]) > g_18[1][0][1]) , g_18[4][0][2]) & g_18[1][0][2]), 8L)))), 0)), g_18[4][0][2])) >= 4UL), 0x8AE6L)));
    return g_18[1][0][2];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_18[i][j][k], "g_18[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_80[i][j].f0, "g_80[i][j].f0", print_hash_value);
            transparent_crc(g_80[i][j].f1, "g_80[i][j].f1", print_hash_value);
            transparent_crc(g_80[i][j].f2, "g_80[i][j].f2", print_hash_value);
            transparent_crc(g_80[i][j].f3, "g_80[i][j].f3", print_hash_value);
            transparent_crc(g_80[i][j].f4, "g_80[i][j].f4", print_hash_value);
            transparent_crc(g_80[i][j].f5, "g_80[i][j].f5", print_hash_value);

        }
    }
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_181[i], "g_181[i]", print_hash_value);

    }
    transparent_crc(g_191, "g_191", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_222[i], "g_222[i]", print_hash_value);

    }
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
