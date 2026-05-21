// SPDX-License-Identifier: MIT
// cctest_csmith_41d5c178.c --- cctest case csmith_41d5c178 (csmith seed 1104527736)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcf02d384 */

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

// Options:   -s 1104527736 -o /tmp/csmith_gen_mvc6wx8w/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int32_t  f1;
   int64_t  f2;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   uint64_t  f1;
   uint32_t  f2;
};

union U2 {
   const uint32_t  f0;
   uint64_t  f1;
   const uint32_t  f2;
   const uint16_t  f3;
};

union U4 {
   uint32_t  f0;
};

union U5 {
   const uint32_t  f0;
   const uint32_t  f1;
   const uint8_t  f2;
};

union U8 {
   const int8_t  f0;
   int32_t  f1;
   uint32_t  f2;
};

union U9 {
   uint32_t  f0;
   uint32_t  f1;
   int32_t  f2;
};


static uint32_t g_9 = 0xF5BFB66FL;
static union U8 g_22 = {-10L};
static union U9 g_24 = {4294967295UL};
static union U5 g_26[1] = {{2UL}};
static union U4 g_27 = {18446744073709551615UL};
static uint8_t g_60 = 0x25L;
static struct S0 g_61 = {0x45A2910EL,0xFB3884E3L,0L};
static uint64_t g_86 = 0x58B784503A7054D2LL;
static union U2 g_91[1] = {{0x863885E3L}};
static uint64_t g_93 = 7UL;
static uint32_t g_105 = 7UL;
static int32_t g_131 = 0x956188C7L;
static uint16_t g_149 = 65535UL;
static union U1 g_161 = {0xE3FE1AB3L};
static const uint16_t g_219 = 0xBCFDL;
static int8_t g_220 = (-1L);
static int16_t g_221 = 0L;
static int64_t g_240 = (-1L);
static int16_t g_242 = 0x1917L;
static uint16_t g_243 = 65531UL;
static struct S0 g_264 = {0L,0x7553D69DL,0x5C18B874153CC621LL};
static uint64_t g_335 = 4UL;



static union U5  func_1(void);
static uint8_t  func_4(uint16_t  p_5, union U9  p_6, uint8_t  p_7, int32_t  p_8);
static uint16_t  func_16(uint64_t  p_17, union U9  p_18, union U8  p_19, union U5  p_20, union U4  p_21);
static uint8_t  func_40(union U1  p_41);




static union U5  func_1(void)
{ 
    int16_t l_23 = 0x0955L;
    union U8 l_25[2] = {{0x67L},{0x67L}};
    int32_t l_261 = 3L;
    uint8_t l_262 = 250UL;
    struct S0 l_263[1] = {{0x339974A8L,0x839B6CC7L,0x5A513612929A0D02LL}};
    const union U9 l_274[4] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
    int8_t l_277 = 0x73L;
    int32_t l_313[1];
    union U5 l_325 = {4294967295UL};
    int i;
    for (i = 0; i < 1; i++)
        l_313[i] = 0L;
    g_264 = ((safe_div_func_int16_t_s_s((l_262 &= (l_261 = (func_4(g_9, ((safe_rshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((func_16((g_22 , (1L > (l_23 &= (((0L || 0xC8L) & 2UL) >= g_22.f0)))), g_24, l_25[1], g_26[0], g_27) && g_93), l_25[1].f0)) == l_25[1].f0), l_25[1].f0)), g_131)) , g_24), g_91[0].f3, l_25[1].f0) < l_25[1].f0))), g_91[0].f2)) , l_263[0]);
lbl_326:
    g_264.f0 &= ((+(((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint64_t_u_u((++g_93), (255UL >= ((l_261 = ((g_161.f2 = (safe_add_func_uint64_t_u_u(g_91[0].f0, ((((l_274[3] , (((g_242 = (safe_div_func_int32_t_s_s(((g_131 |= 0x36DCFDDAL) , l_25[1].f0), g_26[0].f2))) ^ 0x52AEL) <= g_22.f0)) >= 0L) ^ g_86) && 1L)))) ^ g_61.f0)) <= l_277)))) >= g_91[0].f2), 1)) || 9L) > g_61.f1)) >= g_61.f0);
    for (g_264.f2 = (-7); (g_264.f2 > (-24)); g_264.f2 = safe_sub_func_uint64_t_u_u(g_264.f2, 5))
    { 
        uint32_t l_292 = 0x4DBD819FL;
        uint16_t l_293 = 0xA0AFL;
        int32_t l_294[1];
        int32_t l_337 = (-7L);
        int i;
        for (i = 0; i < 1; i++)
            l_294[i] = (-9L);
        if (((g_22 , 0xEFC7L) && ((g_24 = g_24) , (safe_add_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u(0x3E88C3CEL, 0xF3A2DD5CL)) , l_263[0].f0), g_240)))))
        { 
            int64_t l_295[3];
            int i;
            for (i = 0; i < 3; i++)
                l_295[i] = (-5L);
            for (g_242 = (-4); (g_242 < 27); g_242++)
            { 
                uint32_t l_296 = 18446744073709551606UL;
                l_293 = (g_61.f2 && ((((safe_add_func_int64_t_s_s(((safe_add_func_uint64_t_u_u(g_26[0].f1, (g_240 ^= l_292))) , g_61.f1), g_93)) != l_292) != g_86) > 0xF91F7C5DL));
                l_296++;
            }
            for (g_61.f2 = 20; (g_61.f2 != (-12)); g_61.f2 = safe_sub_func_int16_t_s_s(g_61.f2, 8))
            { 
                if (g_161.f0)
                    break;
                g_61.f0 = ((l_313[0] &= ((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(255UL, (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint64_t_u_u((1L < (safe_sub_func_uint64_t_u_u((g_86 = 0UL), 0x05D671C78C1057D3LL))), g_264.f1)), g_220)), g_27.f0)))), 7L)) == g_131)) && (-2L));
            }
        }
        else
        { 
            int8_t l_323 = 1L;
            int32_t l_324 = 8L;
            for (g_24.f0 = 0; (g_24.f0 != 14); g_24.f0++)
            { 
                const uint32_t l_320 = 0x69C53B77L;
                l_324 = (safe_add_func_int64_t_s_s((g_61.f2 = (safe_sub_func_int8_t_s_s(l_320, (((g_161.f2 ^ (safe_mul_func_int8_t_s_s((((((l_294[0] |= ((l_323 || 0xF827C71321D4BD02LL) , l_320)) < g_22.f0) | l_274[3].f1) & 0xDBA26975L) , g_240), 0x98L))) == l_274[3].f2) <= g_264.f0)))), 18446744073709551615UL));
                g_61 = g_61;
                return g_26[0];
            }
            if (g_60)
            { 
                if (l_323)
                    break;
                return l_325;
            }
            else
            { 
                int64_t l_336 = (-5L);
                if (g_60)
                    break;
                if (g_60)
                    goto lbl_326;
                l_337 ^= (((safe_mul_func_uint16_t_u_u(l_261, (-1L))) != (safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((g_335 = (safe_sub_func_int16_t_s_s((g_264.f0 , 1L), l_292))), l_294[0])), 250UL))) != l_336);
            }
        }
    }
    return g_26[0];
}



static uint8_t  func_4(uint16_t  p_5, union U9  p_6, uint8_t  p_7, int32_t  p_8)
{ 
    uint8_t l_138[4][1][4] = {{{0xB3L,0UL,0xB3L,0xB3L}},{{0UL,0UL,3UL,0UL}},{{0UL,0xB3L,0xB3L,0UL}},{{0xB3L,0UL,0xB3L,0xB3L}}};
    int32_t l_181[2];
    struct S0 l_182 = {0L,0L,1L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_181[i] = 0x30F1BED5L;
    if (((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_138[0][0][3], ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((g_149 = (g_61 , ((p_8 = (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(p_8, (((g_26[0].f1 && g_60) > 0x2EEF0ED0L) <= p_6.f0))) == l_138[1][0][3]), p_6.f0))) & p_5))), g_91[0].f2)) < g_131), l_138[0][0][3])), 2)) > l_138[1][0][0]))), p_5)), 9)) != g_131))
    { 
        return g_86;
    }
    else
    { 
        int32_t l_160 = 0xC57C8980L;
        uint8_t l_237 = 0xEBL;
        if ((safe_mod_func_int8_t_s_s((p_8 && (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((g_60 = ((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((g_24 , (g_131 , g_105)), l_138[3][0][2])), g_61.f1)) && 0xADL)) ^ p_6.f1), l_138[0][0][3])) >= 0L), 0xA9L))), l_160)))
        { 
            uint32_t l_179 = 0x125292E0L;
            int32_t l_180 = 6L;
            g_61 = g_61;
            p_8 ^= 0xFA84F372L;
            p_8 = (((g_149 = (((g_161 , (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((l_181[1] = (safe_unary_minus_func_uint64_t_u(((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u((65532UL <= (safe_lshift_func_int8_t_s_s(((((l_179 = (safe_add_func_int16_t_s_s(g_27.f0, (p_7 != g_9)))) != 0x99L) == l_138[2][0][2]) | g_22.f0), l_160))), l_180)) , g_91[0].f2), 18446744073709551613UL)), 0L)), l_180)) <= p_6.f2)))), 65535UL)), g_131))) & l_138[0][0][2]) , l_138[0][0][3])) >= g_24.f1) || p_6.f1);
        }
        else
        { 
            struct S0 l_183 = {0x8762AC07L,0x36C1BE63L,-1L};
            l_183 = l_182;
            for (g_161.f2 = 0; (g_161.f2 > 29); g_161.f2 = safe_add_func_uint8_t_u_u(g_161.f2, 4))
            { 
                int64_t l_186 = 0xC0A4866C57027B00LL;
                int32_t l_198 = 0xBA012D08L;
                if (l_186)
                    break;
                p_8 &= (((((((safe_div_func_int32_t_s_s((g_91[0].f0 >= (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((+((g_9 , (g_93 = l_186)) < (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_181[1], l_183.f1)), p_7)))) , l_198), 2)) <= p_7), g_9))), g_91[0].f2)) <= l_160) > p_7) != l_182.f0) | g_105) , p_7) || 0x5F8E2DF95CBA6E25LL);
            }
            for (g_24.f1 = 0; (g_24.f1 != 57); g_24.f1 = safe_add_func_int16_t_s_s(g_24.f1, 3))
            { 
                uint64_t l_222 = 1UL;
                l_222 = (safe_add_func_int8_t_s_s((((l_183.f0 = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint64_t_u_u(((g_26[0].f1 && (safe_rshift_func_int16_t_s_s(((g_221 = (((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((l_182.f1 = (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_7, 4)), p_6.f0))), (g_220 ^= ((safe_mod_func_uint8_t_u_u((g_219 && g_24.f2), l_160)) & p_6.f0)))), (-1L))) >= g_161.f2) >= 0x1EL)) == g_93), 6))) < 4294967290UL), p_6.f2)), 0))) ^ (-9L)) < 1L), 1UL));
                if (l_138[0][0][3])
                    continue;
                if (g_22.f0)
                    continue;
            }
        }
        for (g_61.f2 = 20; (g_61.f2 <= 23); g_61.f2 = safe_add_func_uint8_t_u_u(g_61.f2, 6))
        { 
            union U8 l_228 = {0x2DL};
            struct S0 l_238[1] = {{0x0A595513L,0xB15F34AEL,0x7AD302FA1FB7984CLL}};
            int i;
            if ((safe_unary_minus_func_uint16_t_u(((safe_sub_func_int8_t_s_s(p_6.f1, (l_228 , (safe_div_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(((p_7 & ((safe_mul_func_int8_t_s_s((0xE633L || p_6.f2), p_6.f1)) != p_8)) & g_61.f0), 246UL)), l_228.f0)) | l_237), 5L))))) > g_91[0].f2))))
            { 
                l_182 = l_238[0];
                return l_237;
            }
            else
            { 
                int16_t l_239 = (-1L);
                int32_t l_241 = (-6L);
                g_243--;
                if (l_241)
                    continue;
                if (p_6.f1)
                    break;
            }
            for (g_61.f0 = 0; (g_61.f0 <= 0); g_61.f0 += 1)
            { 
                p_8 |= g_61.f2;
            }
            for (l_228.f2 = 0; (l_228.f2 <= 0); l_228.f2 += 1)
            { 
                int i;
                l_238[l_228.f2] = l_238[l_228.f2];
                if (p_6.f1)
                    continue;
            }
        }
    }
    for (g_221 = 0; (g_221 >= 0); g_221 -= 1)
    { 
        int i;
        return l_181[g_221];
    }
    g_61.f1 = ((l_181[1] = (safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((6L ^ ((safe_sub_func_int64_t_s_s(0x1895242DE1A71A36LL, 18446744073709551612UL)) ^ (((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(0xA6240548L)), g_26[0].f0)), 1L)), g_26[0].f2)) , l_182.f2) , 0x09L))), 2)), g_24.f2)), g_26[0].f0))) | p_5);
    return g_131;
}



static uint16_t  func_16(uint64_t  p_17, union U9  p_18, union U8  p_19, union U5  p_20, union U4  p_21)
{ 
    union U1 l_42 = {18446744073709551615UL};
    int32_t l_62[3][1];
    struct S0 l_64 = {-6L,0x1120EAC2L,0L};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_62[i][j] = (-10L);
    }
    if ((((safe_sub_func_uint16_t_u_u(0xEF9FL, ((safe_add_func_int8_t_s_s((g_24.f0 <= ((safe_add_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(1L, ((safe_mod_func_uint8_t_u_u(func_40(l_42), g_9)) && 1UL))), 0xBD28F7D061DAE56BLL)), g_22.f0)) && p_18.f1)), p_19.f0)) && 0UL))) >= l_42.f0) && 0x58L))
    { 
        l_62[2][0] = (p_18 , 0xD694BF01L);
    }
    else
    { 
        struct S0 l_63 = {0x0115B503L,3L,-7L};
        l_64 = l_63;
        l_64.f0 = (safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((g_22 , ((((safe_mul_func_int8_t_s_s((l_62[2][0] = (g_22.f0 == (safe_div_func_int32_t_s_s((-1L), ((safe_lshift_func_uint8_t_u_u(((0x7676DC04L <= g_61.f2) ^ l_62[2][0]), g_61.f2)) , g_9))))), 0x39L)) || l_63.f0) > p_20.f2) > 0x5A1CDA016E9852BCLL)), (-1L))) >= p_20.f0), (-3L)));
    }
    l_62[2][0] = (-1L);
    if ((safe_mod_func_int64_t_s_s((l_64.f1 = l_42.f0), l_42.f0)))
    { 
        struct S0 l_77[5] = {{0x57EB9077L,0xC5754D5CL,-1L},{0x57EB9077L,0xC5754D5CL,-1L},{0x57EB9077L,0xC5754D5CL,-1L},{0x57EB9077L,0xC5754D5CL,-1L},{0x57EB9077L,0xC5754D5CL,-1L}};
        int i;
        l_77[3] = g_61;
        l_77[3].f0 = (safe_mul_func_int8_t_s_s(g_9, (safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((g_86 = l_77[3].f0), (((safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s((l_42.f2 <= ((g_91[0] , 0x6DA1L) ^ g_26[0].f2)), 0x1309L)), l_62[2][0])) || g_91[0].f3) & p_18.f1))), p_20.f2)), g_61.f0))));
    }
    else
    { 
        int16_t l_92 = 0x266EL;
        int32_t l_106 = 0x21E3D09CL;
        int32_t l_116 = 0xA4DFBEF9L;
        struct S0 l_117 = {0L,-8L,0x5FD3A0BC11C586F4LL};
        g_93--;
        if ((safe_add_func_uint16_t_u_u((~(g_61.f1 && (l_106 = ((safe_div_func_int64_t_s_s(g_91[0].f2, (safe_div_func_int64_t_s_s(((g_105 = ((safe_lshift_func_uint16_t_u_u(((l_92 && p_18.f0) != 0xF5A7L), 9)) ^ 0UL)) & l_92), g_24.f0)))) | l_92)))), p_20.f2)))
        { 
            union U2 l_107 = {0xDD649878L};
            l_116 = (g_61 , (((l_107 , ((((safe_add_func_int32_t_s_s(l_107.f3, (safe_sub_func_uint64_t_u_u((safe_div_func_int8_t_s_s(((((l_106 = (safe_add_func_uint64_t_u_u((p_19.f0 , p_18.f0), p_17))) < p_20.f1) <= g_26[0].f1) | 0x2CA71060L), p_20.f0)), p_17)))) | p_19.f0) == l_92) , l_62[2][0])) != 0x75BA722EB29FA799LL) | l_107.f3));
        }
        else
        { 
            struct S0 l_118 = {0xBF453DDAL,-8L,-7L};
            l_118 = (l_117 = g_61);
        }
        l_62[2][0] = (safe_mul_func_int8_t_s_s(g_91[0].f0, (safe_add_func_int64_t_s_s((((safe_lshift_func_uint16_t_u_s(p_20.f1, (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_116 = (l_92 != ((((((g_26[0].f0 == 0xFDE04AB7L) ^ 0UL) != p_18.f1) & 0x2365208590E4044FLL) , g_61.f1) || g_9))), g_93)), 14)), p_19.f0)))) == 0x2B3D635D9A7C6434LL) | l_64.f2), g_24.f0))));
    }
    return l_64.f2;
}



static uint8_t  func_40(union U1  p_41)
{ 
    struct S0 l_45[5][3][3] = {{{{1L,0L,1L},{0x3A1E2510L,0x74126315L,0xFEB1EC6C04840C2CLL},{5L,0x010F1939L,1L}},{{-1L,0x4A1AB704L,1L},{-8L,0xCCF58D91L,-2L},{-1L,-1L,0xBEC151D1A932DA3BLL}},{{0x6CBC8CA9L,8L,0xCF39588DFEF28ED3LL},{1L,1L,0x89098934ECA6696BLL},{0x6CBC8CA9L,8L,0xCF39588DFEF28ED3LL}}},{{{-1L,0x4A1AB704L,1L},{-1L,-1L,0xBEC151D1A932DA3BLL},{0L,2L,0x24086237DDC4EA3CLL}},{{1L,0L,1L},{1L,1L,0x89098934ECA6696BLL},{5L,0x010F1939L,1L}},{{-8L,0xCCF58D91L,-2L},{-8L,0xCCF58D91L,-2L},{0L,2L,0x24086237DDC4EA3CLL}}},{{{0x6CBC8CA9L,8L,0xCF39588DFEF28ED3LL},{0x3A1E2510L,0x74126315L,0xFEB1EC6C04840C2CLL},{0x6CBC8CA9L,8L,0xCF39588DFEF28ED3LL}},{{-8L,0xCCF58D91L,-2L},{-1L,-1L,0xBEC151D1A932DA3BLL},{-1L,-1L,0xBEC151D1A932DA3BLL}},{{1L,0L,1L},{0x3A1E2510L,0x74126315L,0xFEB1EC6C04840C2CLL},{5L,0x010F1939L,1L}}},{{{-1L,0x4A1AB704L,1L},{-8L,0xCCF58D91L,-2L},{-1L,-1L,0xBEC151D1A932DA3BLL}},{{0x6CBC8CA9L,8L,0xCF39588DFEF28ED3LL},{1L,1L,0x89098934ECA6696BLL},{0x6CBC8CA9L,8L,0xCF39588DFEF28ED3LL}},{{-1L,0x4A1AB704L,1L},{-1L,-1L,0xBEC151D1A932DA3BLL},{0L,2L,0x24086237DDC4EA3CLL}}},{{{1L,0L,1L},{1L,1L,0x89098934ECA6696BLL},{5L,0x010F1939L,1L}},{{-8L,0xCCF58D91L,-2L},{-8L,0xCCF58D91L,-2L},{0L,2L,0x24086237DDC4EA3CLL}},{{0x6CBC8CA9L,8L,0xCF39588DFEF28ED3LL},{0x3A1E2510L,0x74126315L,0xFEB1EC6C04840C2CLL},{0x6CBC8CA9L,8L,0xCF39588DFEF28ED3LL}}}};
    int i, j, k;
    for (p_41.f2 = 0; (p_41.f2 <= 42); p_41.f2++)
    { 
        struct S0 l_46 = {0x6E27DFDEL,1L,0x92179B1000BAF34CLL};
        union U4 l_59 = {0xF8D6FFBAL};
        l_46 = l_45[0][2][0];
        l_46.f0 ^= ((safe_rshift_func_int16_t_s_s(((l_45[0][2][0].f0 &= (safe_sub_func_int32_t_s_s((4294967289UL > ((safe_mod_func_int64_t_s_s((l_46.f1 <= (g_60 = ((safe_mul_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(g_27.f0, (safe_div_func_uint8_t_u_u((l_59 , g_26[0].f2), p_41.f2)))) || g_24.f2), l_59.f0)) | p_41.f0))), g_24.f0)) != 0xBBD8L)), 0x270ADFF4L))) | g_9), 5)) , p_41.f0);
    }
    g_61 = g_61;
    return l_45[0][2][0].f2;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_26[i].f0, "g_26[i].f0", print_hash_value);
        transparent_crc(g_26[i].f1, "g_26[i].f1", print_hash_value);
        transparent_crc(g_26[i].f2, "g_26[i].f2", print_hash_value);

    }
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    transparent_crc(g_61.f2, "g_61.f2", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_91[i].f0, "g_91[i].f0", print_hash_value);
        transparent_crc(g_91[i].f2, "g_91[i].f2", print_hash_value);
        transparent_crc(g_91[i].f3, "g_91[i].f3", print_hash_value);

    }
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_161.f0, "g_161.f0", print_hash_value);
    transparent_crc(g_161.f2, "g_161.f2", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_264.f0, "g_264.f0", print_hash_value);
    transparent_crc(g_264.f1, "g_264.f1", print_hash_value);
    transparent_crc(g_264.f2, "g_264.f2", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
