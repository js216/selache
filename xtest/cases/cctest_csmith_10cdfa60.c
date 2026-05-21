// SPDX-License-Identifier: MIT
// cctest_csmith_10cdfa60.c --- cctest case csmith_10cdfa60 (csmith seed 281934432)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x98ddddca */

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

// Options:   -s 281934432 -o /tmp/csmith_gen_5bff0p8f/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
};
#pragma pack(pop)

union U1 {
   const int32_t  f0;
   int16_t  f1;
   int8_t  f2;
};

union U2 {
   int64_t  f0;
   uint32_t  f1;
};


static int8_t g_11 = 0x07L;
static union U2 g_30 = {0x3813BF58AAE07EA4LL};
static uint16_t g_61 = 0xD4C3L;
static struct S0 g_76[5] = {{1UL},{1UL},{1UL},{1UL},{1UL}};
static int32_t g_101[3] = {0x5B495AE8L,0x5B495AE8L,0x5B495AE8L};
static uint8_t g_128 = 0x71L;
static int64_t g_129 = 6L;
static union U1 g_157 = {-1L};
static uint8_t g_243 = 246UL;
static int32_t g_258[3] = {0x45407581L,0x45407581L,0x45407581L};
static union U1 g_328 = {0x5133C6B0L};



static int32_t  func_1(void);
static struct S0  func_5(uint8_t  p_6, union U2  p_7, union U1  p_8, uint16_t  p_9, int64_t  p_10);
static union U2  func_12(uint64_t  p_13, uint16_t  p_14, int32_t  p_15, uint64_t  p_16);
static uint64_t  func_17(int32_t  p_18, uint8_t  p_19, union U2  p_20, union U1  p_21);




static int32_t  func_1(void)
{ 
    uint16_t l_2 = 0UL;
    uint32_t l_29 = 0UL;
    union U1 l_31[2][2] = {{{-3L},{-3L}},{{-3L},{-3L}}};
    int32_t l_257[3];
    int32_t l_259[2][5] = {{0x7E87AF14L,0x7E87AF14L,0x7E87AF14L,0x7E87AF14L,0x7E87AF14L},{0xCB5AC61BL,0xCB5AC61BL,0xCB5AC61BL,0xCB5AC61BL,0xCB5AC61BL}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_257[i] = 0L;
    l_2--;
    g_76[3] = func_5(g_11, func_12((g_258[2] ^= (l_257[0] = ((func_17(((+(safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((0x67L | ((((((safe_rshift_func_uint8_t_u_s(l_2, 1)) > 0x5FL) != l_29) , l_29) < g_11) == l_2)), l_29)), l_2))) , l_29), l_2, g_30, l_31[0][0]) != g_30.f0) | l_31[0][0].f0))), l_2, l_259[0][2], l_259[0][2]), g_328, l_259[0][2], l_259[0][2]);
    l_259[0][2] |= ((safe_mul_func_uint8_t_u_u((g_243 || (+(safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s(l_31[0][0].f0, (((-1L) | g_157.f2) > 0xEAL))), l_31[0][0].f0)), g_30.f1)) , 248UL), g_258[2])))), g_328.f0)) && g_258[2]);
    return l_257[1];
}



static struct S0  func_5(uint8_t  p_6, union U2  p_7, union U1  p_8, uint16_t  p_9, int64_t  p_10)
{ 
    uint32_t l_335 = 0x622DDEA7L;
    int32_t l_338 = (-9L);
    uint64_t l_350 = 6UL;
    struct S0 l_366 = {0UL};
    int64_t l_379 = 1L;
    if (((+4294967287UL) == (((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((((!(l_335 < l_335)) | (safe_lshift_func_uint8_t_u_u(1UL, 6))) | 0x8C05L), 0xDCL)), p_10)) || g_328.f1) && p_7.f1)))
    { 
        uint16_t l_339 = 6UL;
        int32_t l_342 = 0x9711FA60L;
        int32_t l_351 = (-1L);
        --l_339;
        l_351 |= (0xA89C14EC5ED5C099LL || (((p_7.f0 ^= (l_342 &= g_328.f1)) < 0x855315CE64B5874ELL) , (safe_div_func_int64_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u((l_338 = ((~((g_243 ^ 1UL) | 1L)) & l_335)), l_350)), 0x1717L)), (-1L)))));
    }
    else
    { 
        struct S0 l_367 = {0x779BL};
        int32_t l_374 = (-1L);
        union U1 l_402 = {8L};
        for (g_61 = (-8); (g_61 > 54); ++g_61)
        { 
            int64_t l_365 = 0xD1F3727B0FE0126BLL;
            int32_t l_371 = 1L;
            if ((safe_rshift_func_int16_t_s_u(0L, 5)))
            { 
                l_365 = (safe_sub_func_int32_t_s_s(p_8.f2, (safe_add_func_uint32_t_u_u((+(safe_mul_func_uint16_t_u_u(p_7.f1, 0x3BCCL))), (safe_mod_func_int32_t_s_s(p_7.f1, g_30.f1))))));
            }
            else
            { 
                uint32_t l_368 = 4294967293UL;
                l_367 = l_366;
                if (p_7.f1)
                    continue;
                l_371 = ((0x4925829D655A31A0LL | l_350) == (l_368--));
            }
        }
        for (l_374 = 2; (l_374 >= 0); l_374 -= 1)
        { 
        }
    }
    return l_366;
}



static union U2  func_12(uint64_t  p_13, uint16_t  p_14, int32_t  p_15, uint64_t  p_16)
{ 
    uint64_t l_264 = 0xBDC80103624ADBFCLL;
    int16_t l_273 = 0xC393L;
    struct S0 l_297 = {0xEBCBL};
    int32_t l_311[4][5][3] = {{{(-1L),0x19DB94EEL,0x19DB94EEL},{0x9E97E57FL,1L,0L},{1L,0xC4D6C543L,1L},{1L,0xD71B0492L,(-1L)},{0x9E97E57FL,0xFCC2DBC3L,0x9E97E57FL}},{{(-1L),0xD71B0492L,1L},{1L,0xC4D6C543L,1L},{1L,0xFCC2DBC3L,0xD71B0492L},{5L,5L,0x19DB94EEL},{1L,0x19DB94EEL,0xFCC2DBC3L}},{{0xFCC2DBC3L,0x19DB94EEL,1L},{0x19DB94EEL,5L,5L},{0xD71B0492L,0xFCC2DBC3L,1L},{0x9E97E57FL,0L,0xFCC2DBC3L},{0x9E97E57FL,(-1L),0x19DB94EEL}},{{0xD71B0492L,0L,0xD71B0492L},{0x19DB94EEL,(-1L),0x9E97E57FL},{0xFCC2DBC3L,0L,0x9E97E57FL},{1L,0xFCC2DBC3L,0xD71B0492L},{5L,5L,0x19DB94EEL}}};
    int32_t l_312 = 0x937DDB64L;
    int16_t l_317[4] = {1L,1L,1L,1L};
    union U2 l_325 = {0L};
    int i, j, k;
    g_258[2] = (safe_lshift_func_int8_t_s_s(((((((safe_rshift_func_int16_t_s_u(l_264, (g_61 = ((g_157.f2 & (0x0E03L <= (safe_rshift_func_int8_t_s_s(0L, l_264)))) | l_264)))) ^ p_14) , 65528UL) & p_13) , (-4L)) == g_11), g_243));
    if ((g_101[1] = (safe_mul_func_uint16_t_u_u((g_258[2] > l_264), (safe_div_func_uint64_t_u_u(18446744073709551613UL, (((safe_sub_func_uint32_t_u_u((((p_15 ^ l_273) <= l_273) <= l_264), 0x7568F5A8L)) && g_258[2]) | 0UL)))))))
    { 
        int32_t l_276 = 0x9C3501ADL;
        int32_t l_279 = 0x1939D09DL;
        l_279 &= ((safe_mul_func_uint16_t_u_u(((((-1L) != l_276) , 0x1E81L) > (safe_div_func_int16_t_s_s((((l_273 && l_276) | l_276) && 0x4A00EA68498C81BCLL), g_61))), 6L)) < g_258[1]);
    }
    else
    { 
        g_76[3] = (g_76[3] , g_76[4]);
    }
    if (p_15)
    { 
        uint64_t l_285 = 0x79E957A56D6DE414LL;
        int32_t l_296 = 0L;
        int32_t l_314 = 0xA9FA5618L;
        int32_t l_316[4] = {1L,1L,1L,1L};
        uint64_t l_319 = 0xDFB2D179703896E1LL;
        int i;
        if ((g_101[1] = ((~(g_129 = (p_14 | l_264))) , (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(g_157.f2, 11)), 7)))))
        { 
            uint16_t l_295 = 1UL;
            int32_t l_313 = 0x458B7C67L;
            int32_t l_315[4][3][2] = {{{(-5L),1L},{0L,0x58A6C8DEL},{0L,1L}},{{(-5L),1L},{0L,0x58A6C8DEL},{0L,1L}},{{(-5L),1L},{0L,0x58A6C8DEL},{0L,1L}},{{(-5L),1L},{0L,0x58A6C8DEL},{0L,1L}}};
            int64_t l_318 = 0x0183994F5809B3B6LL;
            int i, j, k;
            if (((l_285 , ((g_243 = l_273) == (((l_264 , ((safe_sub_func_int32_t_s_s((l_296 = (safe_div_func_int16_t_s_s(((p_14--) | ((l_295 &= (safe_div_func_int32_t_s_s((!p_13), p_16))) || 0x0C550413L)), 1L))), g_61)) == p_13)) > l_285) >= p_15))) , g_30.f0))
            { 
                p_15 ^= g_30.f1;
            }
            else
            { 
                g_76[0] = l_297;
            }
            l_296 ^= ((g_157.f1 = ((safe_add_func_uint16_t_u_u((g_61 ^ (~(safe_rshift_func_int16_t_s_u(g_129, 1)))), ((p_14 , (((safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((l_312 = ((l_311[1][4][2] |= (safe_mod_func_uint64_t_u_u(g_76[3].f0, l_264))) ^ p_15)), 0x29L)) > l_295), 2)) || 1L), 4294967290UL)) >= l_297.f0) < g_128)) , p_16))) >= 0xE128B6DCFAA13AD1LL)) < g_129);
            l_319--;
        }
        else
        { 
            uint32_t l_322 = 0xC631E3E2L;
            ++l_322;
            return l_325;
        }
        for (p_15 = 0; (p_15 == 0); p_15 = safe_add_func_uint8_t_u_u(p_15, 2))
        { 
            return g_30;
        }
    }
    else
    { 
        return l_325;
    }
    return l_325;
}



static uint64_t  func_17(int32_t  p_18, uint8_t  p_19, union U2  p_20, union U1  p_21)
{ 
    uint16_t l_32 = 65534UL;
    int32_t l_33[5][1][2];
    int32_t l_127 = 0x52A12E21L;
    union U2 l_188 = {0x579058001A0E2963LL};
    struct S0 l_194 = {0xECF3L};
    int64_t l_197 = 0xD0454759984D6A5DLL;
    int32_t l_217[3];
    uint32_t l_218 = 0xC6AD9C61L;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_33[i][j][k] = 1L;
        }
    }
    for (i = 0; i < 3; i++)
        l_217[i] = 7L;
    l_33[3][0][0] = l_32;
    for (p_19 = 0; (p_19 != 22); p_19++)
    { 
        int8_t l_60 = 0L;
        int32_t l_77 = (-6L);
        int32_t l_134 = 0x389D4FE0L;
    }
    if ((((p_21.f2 = ((safe_sub_func_uint32_t_u_u(g_128, (((safe_div_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((((l_188 , p_20.f1) > ((((safe_add_func_int8_t_s_s((g_30.f1 < p_21.f2), l_188.f1)) >= g_30.f1) & 0UL) , p_20.f1)) == 1UL), p_21.f1)), 0x3421460D04652DBFLL)) ^ p_21.f1) & 0UL))) | (-5L))) ^ l_33[1][0][1]) , l_32))
    { 
        uint32_t l_191[1];
        int i;
        for (i = 0; i < 1; i++)
            l_191[i] = 0x14961C1CL;
        l_191[0]--;
        g_76[4] = l_194;
    }
    else
    { 
        int8_t l_205 = 0L;
        int32_t l_207 = 0x6FF7F161L;
        int32_t l_210 = 0x67B02383L;
        int32_t l_212 = (-1L);
        int32_t l_213[1][4][5];
        union U2 l_228 = {0xCFF28DE542F5EF4CLL};
        struct S0 l_232[3][4] = {{{0x36BFL},{0x36BFL},{0x36BFL},{0x36BFL}},{{0x36BFL},{0x36BFL},{0x36BFL},{0x36BFL}},{{0x36BFL},{0x36BFL},{0x36BFL},{0x36BFL}}};
        uint16_t l_246 = 0x5301L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 5; k++)
                    l_213[i][j][k] = (-6L);
            }
        }
        for (l_32 = 20; (l_32 == 41); l_32 = safe_add_func_uint32_t_u_u(l_32, 7))
        { 
            uint32_t l_198 = 0UL;
            l_198++;
        }
        if ((p_21 , l_188.f1))
        { 
            g_76[2] = l_194;
        }
        else
        { 
            uint8_t l_206 = 0x92L;
            int32_t l_215 = (-6L);
            int32_t l_230[2][2][5] = {{{0xDF52C73AL,(-1L),0xB1BC71CFL,0x9271733CL,0x9271733CL},{(-1L),0xDF52C73AL,(-1L),0xB1BC71CFL,0x9271733CL}},{{0x68CC6768L,0x417789D2L,0x9271733CL,0x417789D2L,0x68CC6768L},{(-1L),0x417789D2L,0xDF52C73AL,0x68CC6768L,0xDF52C73AL}}};
            int i, j, k;
            if ((l_206 = (((g_30.f0 <= ((((((safe_div_func_int64_t_s_s((g_129 &= g_30.f0), ((l_33[3][0][0] & ((((safe_div_func_uint32_t_u_u((((((((g_11 > 1L) ^ g_76[3].f0) & 0x1AD0L) | g_61) | g_128) > g_157.f2) && g_76[3].f0), p_20.f1)) & g_157.f0) | 0x9DB0B106958104EELL) > 0x80L)) & 0xE77DL))) < l_205) && 0xD34D88E7D84EA22ELL) | p_19) < 0x3CL) != 0xAFL)) > l_205) || 4294967286UL)))
            { 
                int32_t l_208 = 0x1CB3E24EL;
                int32_t l_209 = 0x802CFFAFL;
                int32_t l_211 = 1L;
                int32_t l_214 = 1L;
                int32_t l_216 = (-1L);
                l_218++;
            }
            else
            { 
                int8_t l_229 = 0x13L;
                struct S0 l_231[2][5][3] = {{{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}}},{{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}}}};
                int i, j, k;
                g_101[1] |= ((g_157.f2 || (((p_21.f2 == ((((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(g_30.f1, 10)), (safe_unary_minus_func_uint16_t_u((((((l_228 , p_21.f2) , 0xDCL) ^ p_19) , l_229) ^ l_230[0][0][3]))))), 0x3821L)) < p_19) & 0xA7L) <= 0L)) , p_20.f0) , (-1L))) < l_230[1][0][0]);
                l_232[2][2] = l_231[1][1][2];
            }
            for (g_157.f2 = 0; (g_157.f2 >= (-13)); --g_157.f2)
            { 
                return g_101[1];
            }
            for (p_20.f0 = 22; (p_20.f0 > 29); p_20.f0 = safe_add_func_uint64_t_u_u(p_20.f0, 9))
            { 
                g_243 ^= (g_101[1] = (safe_sub_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((0UL & (l_207 |= (g_61 < 4294967290UL))), ((safe_mod_func_uint8_t_u_u(p_20.f1, 0x6AL)) , g_76[3].f0))) != g_128), g_30.f1)));
            }
        }
        for (p_20.f0 = 0; (p_20.f0 != 16); p_20.f0 = safe_add_func_uint8_t_u_u(p_20.f0, 1))
        { 
            l_246--;
            p_18 = (safe_sub_func_int8_t_s_s(l_217[0], (2UL | (safe_mul_func_uint8_t_u_u((p_19 = (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((l_127 = 1UL), g_11)), l_212))), 0x77L)))));
        }
    }
    return p_21.f2;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_30.f1, "g_30.f1", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_76[i].f0, "g_76[i].f0", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_101[i], "g_101[i]", print_hash_value);

    }
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_157.f2, "g_157.f2", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_258[i], "g_258[i]", print_hash_value);

    }
    transparent_crc(g_328.f0, "g_328.f0", print_hash_value);
    transparent_crc(g_328.f1, "g_328.f1", print_hash_value);
    transparent_crc(g_328.f2, "g_328.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
