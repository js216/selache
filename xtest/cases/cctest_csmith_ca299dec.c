// SPDX-License-Identifier: MIT
// cctest_csmith_ca299dec.c --- cctest case csmith_ca299dec (csmith seed 3391725036)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x96f9457e */

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

// Options:   -s 3391725036 -o /tmp/csmith_gen_yjxsi3n0/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int64_t  f0;
   uint8_t  f1;
   const int16_t  f2;
   uint8_t  f3;
   int16_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint16_t  f0;
   const int32_t  f1;
   uint16_t  f2;
   int32_t  f3;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
   uint32_t  f1;
   const uint32_t  f2;
};


static uint32_t g_21 = 4294967295UL;
static int32_t g_22 = 0x7863718BL;
static struct S0 g_23 = {0x05D76270E7AD53A3LL,0xD0L,0x721FL,0xD9L,0L};
static uint32_t g_26 = 0xB64B6930L;
static union U2 g_27 = {0x85D06F62L};
static uint8_t g_36 = 0x2EL;
static uint16_t g_81 = 0xF5EDL;
static struct S1 g_111 = {0xEAE5L,-6L,0UL,0x11F35E5FL};
static int8_t g_137[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static int32_t g_141 = 0L;
static uint8_t g_166 = 252UL;
static int16_t g_177 = 0xB3DBL;
static uint8_t g_179 = 1UL;
static int32_t g_186 = 8L;
static uint8_t g_187 = 255UL;



static struct S1  func_1(void);
static int16_t  func_4(uint16_t  p_5, union U2  p_6, int16_t  p_7, int8_t  p_8, const int32_t  p_9);
static uint8_t  func_15(int32_t  p_16);
static int16_t  func_17(int8_t  p_18, int64_t  p_19, uint32_t  p_20);




static struct S1  func_1(void)
{ 
    int8_t l_10 = 0x66L;
    union U2 l_138 = {0L};
    uint16_t l_182 = 0xC8C1L;
    int32_t l_185 = (-1L);
    struct S1 l_241 = {0x6483L,0x9B61A9ABL,0x8E0CL,0L};
    l_182 = ((safe_rshift_func_int16_t_s_u(func_4((l_10 > (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int64_t_s_s((func_15((func_17(((((g_22 |= g_21) , (((g_23 , 0x7626L) | l_10) , 0x7C422D5FBA2522ABLL)) && g_23.f3) ^ l_10), l_10, l_10) && l_10)) && l_10), g_111.f2)) < g_23.f3), 1))), l_138, g_111.f2, g_23.f4, g_23.f2), 11)) <= g_177);
    for (g_81 = 0; (g_81 <= 4); g_81 += 1)
    { 
        int16_t l_183 = 0x21E4L;
        int32_t l_184[5][2] = {{(-5L),2L},{(-5L),(-5L)},{2L,(-5L)},{(-5L),2L},{(-5L),(-5L)}};
        int i, j;
        for (g_179 = 0; (g_179 <= 4); g_179 += 1)
        { 
            int32_t l_190[5] = {0L,0L,0L,0L,0L};
            int i;
            ++g_187;
            if ((g_137[g_81] > (g_111.f2 = g_137[g_179])))
            { 
                l_190[3] |= (-10L);
            }
            else
            { 
                int32_t l_196 = 1L;
                l_184[0][1] = (g_27.f2 <= g_27.f0);
                l_196 = ((safe_add_func_uint16_t_u_u((!l_185), l_190[1])) != (safe_lshift_func_int8_t_s_u(l_196, 3)));
            }
            g_141 = (~(safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((l_190[3] >= (0xB54DL | ((1L != 0UL) >= 0x7158421DL))) ^ g_111.f0), g_23.f1)), 0x86L)), 4)));
        }
    }
    if (((g_23 , ((safe_lshift_func_int16_t_s_s(g_179, (l_10 != (safe_lshift_func_int8_t_s_u(((((safe_add_func_uint8_t_u_u(((((((0xD875F73016EBDA91LL & 18446744073709551615UL) ^ g_23.f2) & l_138.f1) && l_138.f0) && g_141) && 6UL), 8UL)) > l_185) < l_138.f2) ^ l_182), 1))))) || l_185)) != g_23.f0))
    { 
        g_27.f0 &= (~(l_182 | g_137[1]));
        for (g_141 = 0; (g_141 < (-17)); --g_141)
        { 
            uint32_t l_215 = 7UL;
            int32_t l_218[1];
            const struct S1 l_221 = {0x27CEL,0x96AD940DL,0UL,-1L};
            int i;
            for (i = 0; i < 1; i++)
                l_218[i] = 0L;
            if (l_215)
            { 
                g_111.f3 = (safe_unary_minus_func_int8_t_s((l_218[0] = (((-1L) >= (+g_21)) | g_23.f4))));
                return g_111;
            }
            else
            { 
                int16_t l_224[3][2][4] = {{{4L,(-10L),(-10L),4L},{(-10L),4L,(-10L),(-10L)}},{{4L,4L,0x4199L,4L},{4L,(-10L),(-10L),4L}},{{(-10L),4L,(-10L),(-10L)},{4L,4L,0x4199L,4L}}};
                int32_t l_231 = 0xC3F2B265L;
                int i, j, k;
                l_231 = (safe_mul_func_int16_t_s_s((l_221 , (safe_lshift_func_int8_t_s_s((l_224[0][1][1] , (safe_add_func_int16_t_s_s((l_221.f3 ^ ((safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0x1C95L, l_138.f1)), g_137[1])) != l_138.f0)), l_138.f1))), 0))), (-5L)));
                g_186 = l_221.f0;
            }
        }
    }
    else
    { 
        uint32_t l_240 = 0x61C0A839L;
        for (g_23.f4 = 29; (g_23.f4 <= 8); g_23.f4 = safe_sub_func_int32_t_s_s(g_23.f4, 1))
        { 
            g_141 = (l_138.f0 = (((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((65530UL >= l_240) == ((g_23 , g_23.f4) < l_138.f2)), l_240)), 1)), 0x5064L)) & 0xB9L) < g_137[1]));
        }
    }
    return l_241;
}



static int16_t  func_4(uint16_t  p_5, union U2  p_6, int16_t  p_7, int8_t  p_8, const int32_t  p_9)
{ 
    int8_t l_142 = 0L;
    int32_t l_143 = 0xD213C738L;
    int32_t l_161 = 0x2EBF5661L;
    int32_t l_162 = 0x495FCC9BL;
    int32_t l_163 = 0xF47A7A27L;
    int8_t l_176[1][5];
    int32_t l_178 = 0x4536AC00L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_176[i][j] = 0xD4L;
    }
    if ((((l_142 |= (((g_23.f4 != g_26) != (g_141 = (safe_sub_func_int64_t_s_s(6L, (((p_7 , p_6.f1) > 1L) , g_27.f0))))) | 1UL)) | l_143) != l_143))
    { 
        uint32_t l_148[1][3];
        int32_t l_150 = 8L;
        int16_t l_164[3][2][3] = {{{0xBAA5L,0xBAA5L,0xBAA5L},{0xE344L,1L,0xA485L}},{{0x3EEDL,(-1L),0x3EEDL},{0x3EEDL,0xE344L,(-1L)}},{{0xE344L,0x3EEDL,0x3EEDL},{(-1L),0x3EEDL,0xA485L}}};
        int32_t l_165 = 0L;
        int8_t l_175[1][3][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_148[i][j] = 0xE06D60A0L;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_175[i][j][k] = 4L;
            }
        }
        if (((l_143 ^= ((1UL != g_111.f2) , ((g_21 ^= 1UL) == p_8))) != 0x82539F82EC59D277LL))
        { 
            uint32_t l_152[2];
            int32_t l_153 = (-10L);
            int i;
            for (i = 0; i < 2; i++)
                l_152[i] = 0xFCE029DEL;
            l_153 = (safe_mod_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_u((((g_111.f3 = (g_141 = (l_148[0][2] || ((((0UL != (l_150 = (~l_148[0][2]))) < (safe_unary_minus_func_uint64_t_u(g_36))) == 0xEF536B73L) & l_152[1])))) && g_27.f2) || g_22), p_6.f1)) || g_27.f2) && p_9), 0xB5FEB66E786C87C1LL));
        }
        else
        { 
            uint32_t l_154 = 0xBE40E7BBL;
            l_154 = p_5;
            return p_6.f2;
        }
        l_150 |= (safe_lshift_func_int8_t_s_s(((p_6.f2 || (((safe_div_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u((0x4B03959C9A882A54LL < (--g_166)), ((safe_mul_func_uint16_t_u_u((g_111.f0 = (((g_23.f4 &= (safe_mod_func_uint8_t_u_u(((l_176[0][4] = ((((l_165 = (l_143 = 0x44C3BFC7L)) <= (((safe_lshift_func_uint8_t_u_u(l_148[0][2], g_23.f1)) & l_175[0][0][0]) & l_148[0][0])) > p_6.f0) >= (-1L))) & (-1L)), p_7))) ^ l_175[0][1][0]) , g_111.f2)), l_148[0][2])) || 0x08L))) , g_111.f3), l_164[2][0][2])) != l_175[0][0][0]) || g_111.f2)) ^ 1UL), 7));
    }
    else
    { 
        return g_22;
    }
    --g_179;
    return l_143;
}



static uint8_t  func_15(int32_t  p_16)
{ 
    uint8_t l_58 = 0UL;
    int64_t l_82 = (-1L);
    int32_t l_87 = 9L;
    uint8_t l_104[3];
    int32_t l_115 = 0x230C2C54L;
    int i;
    for (i = 0; i < 3; i++)
        l_104[i] = 1UL;
lbl_83:
    l_58++;
    for (g_26 = 0; (g_26 > 60); ++g_26)
    { 
        uint32_t l_65 = 0xB44E9334L;
        int32_t l_73 = 0x740F48B4L;
        int32_t l_86[1];
        uint32_t l_105[2];
        uint16_t l_114 = 65532UL;
        uint16_t l_116 = 65532UL;
        int i;
        for (i = 0; i < 1; i++)
            l_86[i] = 0x6617FA17L;
        for (i = 0; i < 2; i++)
            l_105[i] = 4UL;
        for (g_22 = 0; (g_22 > (-23)); g_22 = safe_sub_func_int16_t_s_s(g_22, 7))
        { 
            return g_26;
        }
        if ((l_65 = 0x3F1BFD6FL))
        { 
            uint64_t l_72 = 18446744073709551609UL;
            g_27.f0 = (0x0B1CL && ((((((safe_mul_func_int8_t_s_s(((((safe_mul_func_int8_t_s_s((g_26 , (l_73 = (0x5B212F01L | (safe_mul_func_int8_t_s_s(l_72, 0x74L))))), p_16)) ^ l_72) & 0xA48ADB29L) ^ l_58), g_27.f2)) > 249UL) > p_16) , p_16) , 0x0CE74433L) < g_36));
        }
        else
        { 
            g_27.f0 = (g_27 , ((g_36++) != ((safe_add_func_uint64_t_u_u((((((((g_81 = (safe_unary_minus_func_int32_t_s((safe_rshift_func_int8_t_s_s(0x33L, g_27.f2))))) >= ((g_23.f1 != p_16) && 255UL)) || g_81) & 1UL) >= g_23.f2) < l_82) , 18446744073709551612UL), g_26)) || p_16)));
            if (g_27.f0)
                goto lbl_83;
            g_27.f0 = (safe_add_func_uint8_t_u_u((p_16 && p_16), (l_87 ^= l_86[0])));
        }
        for (l_73 = 0; (l_73 >= (-18)); l_73 = safe_sub_func_uint32_t_u_u(l_73, 1))
        { 
            if (((safe_mod_func_uint32_t_u_u(((l_86[0] = (l_104[2] &= (0x15L < (safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(0L, 7)) == ((((g_36 &= (safe_mod_func_int64_t_s_s(((g_27.f2 && ((+(safe_unary_minus_func_int64_t_s((safe_mod_func_int8_t_s_s(g_21, p_16))))) || p_16)) & g_27.f2), 1L))) <= 3L) | g_22) && 0UL)), 0x46L))))) > 0x5BA9186717EFFEB3LL), g_23.f4)) && 0x026DF2D4CE2787FFLL))
            { 
                if (p_16)
                    break;
                l_105[0] = g_23.f0;
                g_27.f0 ^= (safe_add_func_uint8_t_u_u((~((safe_mul_func_int16_t_s_s((g_111 , ((1L == (((safe_mul_func_uint8_t_u_u(l_114, 0xDAL)) && l_105[1]) | g_21)) <= l_115)), l_116)) > l_86[0])), l_82));
            }
            else
            { 
                int64_t l_119 = 0x9C33BC337E5C3585LL;
                p_16 = p_16;
                g_111.f3 ^= (safe_add_func_int32_t_s_s(((g_81 &= (l_115 = l_119)) != 0xA87EL), (safe_sub_func_int16_t_s_s((l_87 = (safe_rshift_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_s(0x7D92L, 4)) < g_36) , 0UL) > l_86[0]), p_16))), 0xDFEAL))));
                g_111.f3 ^= ((((((-4L) & (l_115 , (safe_lshift_func_uint16_t_u_s(p_16, ((((safe_rshift_func_int8_t_s_u((g_23.f0 && l_105[0]), 1)) && l_105[0]) == l_86[0]) | l_86[0]))))) >= p_16) < p_16) != p_16) != 6UL);
            }
        }
    }
    l_115 = (~(g_137[1] ^= (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(g_36, ((l_87 = (-3L)) ^ (0x10L == ((g_27.f0 , p_16) && g_36))))), l_104[0]))));
    return p_16;
}



static int16_t  func_17(int8_t  p_18, int64_t  p_19, uint32_t  p_20)
{ 
    int64_t l_38[4];
    int32_t l_39 = 0xB249E3C8L;
    int32_t l_40 = (-8L);
    uint16_t l_43 = 0xB602L;
    int i;
    for (i = 0; i < 4; i++)
        l_38[i] = (-3L);
    for (g_22 = 0; (g_22 != (-1)); --g_22)
    { 
        uint32_t l_37[2];
        int i;
        for (i = 0; i < 2; i++)
            l_37[i] = 0x8EB7BFBCL;
        if (g_22)
            break;
        l_40 = (((g_26 = g_21) >= (l_39 = (g_27 , (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((g_36 |= 0UL), ((p_18 == 1L) == g_22))), 65533UL)), g_22)) == l_37[1]), l_38[1]))))) & 4294967294UL);
    }
    l_40 = (l_39 | ((safe_add_func_int64_t_s_s((g_23.f0 || (l_43 = l_40)), (l_40 <= p_18))) && p_19));
    g_27.f0 = ((safe_mul_func_int16_t_s_s(9L, (((safe_add_func_int8_t_s_s(0xF7L, (safe_add_func_int64_t_s_s((p_19 = g_23.f2), ((g_21 = ((((safe_add_func_uint16_t_u_u((((safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(g_23.f4, g_22)), g_22)) || p_18) < 0L), p_20)) || g_26) && l_40) != l_40)) >= 0xC5A97588L))))) , g_23.f1) == g_36))) | p_18);
    return l_38[1];
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
    transparent_crc(g_23.f1, "g_23.f1", print_hash_value);
    transparent_crc(g_23.f2, "g_23.f2", print_hash_value);
    transparent_crc(g_23.f3, "g_23.f3", print_hash_value);
    transparent_crc(g_23.f4, "g_23.f4", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_111.f1, "g_111.f1", print_hash_value);
    transparent_crc(g_111.f2, "g_111.f2", print_hash_value);
    transparent_crc(g_111.f3, "g_111.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_137[i], "g_137[i]", print_hash_value);

    }
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
