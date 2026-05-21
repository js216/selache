// SPDX-License-Identifier: MIT
// cctest_csmith_8e93e080.c --- cctest case csmith_8e93e080 (csmith seed 2392055936)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x976bc7a */

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

// Options:   -s 2392055936 -o /tmp/csmith_gen_tw5fjzcx/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int8_t  f0;
   const struct S0  f1;
   int16_t  f2;
};
#pragma pack(pop)

union U2 {
   int64_t  f0;
   uint32_t  f1;
};

union U3 {
   uint8_t  f0;
   uint32_t  f1;
   const uint8_t  f2;
};


static int32_t g_3[4][3][5] = {{{0L,(-8L),(-8L),0L,1L},{0L,0xDA7FE64FL,0xDFE4D9EDL,0xDFE4D9EDL,0xDA7FE64FL},{1L,(-8L),0xDFE4D9EDL,0x55595070L,0x55595070L}},{{(-8L),1L,(-8L),0xDFE4D9EDL,0x55595070L},{0xDA7FE64FL,0L,0x55595070L,0L,0xDA7FE64FL},{(-8L),0L,1L,0xDA7FE64FL,1L}},{{1L,1L,0x55595070L,0xDA7FE64FL,0x3A18E418L},{0L,(-8L),(-8L),0L,1L},{0L,0xDA7FE64FL,0xDFE4D9EDL,0xDFE4D9EDL,0xDA7FE64FL}},{{1L,0xDA7FE64FL,0x55595070L,1L,1L},{0xDA7FE64FL,0x3A18E418L,0xDA7FE64FL,0x55595070L,1L},{0xDFE4D9EDL,(-8L),1L,(-8L),0xDFE4D9EDL}}};
static int32_t g_4 = 0x17C10977L;
static int8_t g_36[2] = {0x26L,0x26L};
static struct S1 g_37 = {0x11L,{0x89A45823L},0xB545L};
static union U3 g_43 = {1UL};
static uint8_t g_68[1] = {0x4CL};
static uint16_t g_70[3] = {0xD33AL,0xD33AL,0xD33AL};
static int64_t g_85 = 0xBAEB33E7469BA6CELL;
static int8_t g_86 = (-3L);
static uint64_t g_92 = 0x2C871CFEE841A119LL;
static int16_t g_103[1][4][2] = {{{4L,4L},{4L,4L},{4L,4L},{4L,4L}}};
static uint8_t g_121 = 1UL;
static uint64_t g_145 = 0x534C0AFD8232EDDALL;
static uint16_t g_158[5] = {65535UL,65535UL,65535UL,65535UL,65535UL};
static uint32_t g_172 = 0UL;
static uint32_t g_173 = 0UL;
static int32_t g_174 = 1L;
static int32_t g_175 = 0xD6E8A3BFL;
static uint32_t g_176 = 1UL;
static int16_t g_183[4][4] = {{(-8L),3L,(-8L),3L},{(-8L),3L,(-8L),3L},{(-8L),3L,(-8L),3L},{(-8L),3L,(-8L),3L}};



static struct S0  func_1(void);
static struct S1  func_9(struct S1  p_10, struct S0  p_11);
static union U3  func_12(int32_t  p_13, int16_t  p_14);
static struct S1  func_15(int32_t  p_16, union U2  p_17, uint32_t  p_18, uint8_t  p_19);




static struct S0  func_1(void)
{ 
    int16_t l_2[1];
    union U2 l_30 = {0x905F4D0C653DDB20LL};
    int32_t l_189 = (-1L);
    struct S0 l_190 = {0x889BAE77L};
    int i;
    for (i = 0; i < 1; i++)
        l_2[i] = 0xAE77L;
    for (g_3[2][2][0] = 0; (g_3[2][2][0] <= 0); g_3[2][2][0] += 1)
    { 
        struct S1 l_179[4] = {{8L,{1L},0x3CD8L},{8L,{1L},0x3CD8L},{8L,{1L},0x3CD8L},{8L,{1L},0x3CD8L}};
        int32_t l_186 = 0x22751AD0L;
        int i;
        if (l_2[g_3[2][2][0]])
        { 
            uint16_t l_29 = 0x7649L;
            int32_t l_31 = 1L;
            for (g_4 = 0; (g_4 <= 0); g_4 += 1)
            { 
                int16_t l_22 = 0xFF26L;
                g_183[3][3] = ((!(safe_div_func_uint64_t_u_u(((~(func_9((func_12((0x94FFL && ((func_15((safe_mul_func_int8_t_s_s(0x99L, ((l_22 >= (l_29 = (safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(((((safe_div_func_uint64_t_u_u(0xD37F4A1D2DAFFA89LL, 0xBDB62B2FAA9634D7LL)) | 0x38L) == 1L) >= 0x933BL), l_22)), (-8L))))) > 0xFFL))), l_30, l_31, l_22) , 65535UL) > g_37.f0)), l_22) , l_179[1]), l_179[1].f1) , 0x55B79E8ABCB01993LL)) ^ 1L), (-7L)))) , l_22);
                if (l_2[g_3[2][2][0]])
                    continue;
            }
        }
        else
        { 
            l_186 &= (safe_lshift_func_uint8_t_u_u(g_85, 0));
        }
    }
    l_189 = (safe_lshift_func_int8_t_s_s((l_30.f0 == 252UL), 5));
    return l_190;
}



static struct S1  func_9(struct S1  p_10, struct S0  p_11)
{ 
    int32_t l_182[3][1];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_182[i][j] = 0x0A7EECA0L;
    }
    g_174 &= (safe_rshift_func_int8_t_s_u(l_182[1][0], g_37.f0));
    return p_10;
}



static union U3  func_12(int32_t  p_13, int16_t  p_14)
{ 
    int32_t l_48[1][4][2] = {{{(-8L),(-8L)},{(-8L),(-8L)},{(-8L),(-8L)},{(-8L),(-8L)}}};
    const union U3 l_53 = {1UL};
    int32_t l_56 = 0x7D66A435L;
    int8_t l_171 = 0L;
    int i, j, k;
    for (p_14 = 1; (p_14 >= 0); p_14 -= 1)
    { 
        int32_t l_44 = 0x558B047CL;
        int i;
        if ((safe_rshift_func_uint8_t_u_s(4UL, (0x0C0ED6D2L & (~(safe_lshift_func_uint8_t_u_s(g_36[p_14], 7)))))))
        { 
            return g_43;
        }
        else
        { 
            struct S0 l_45 = {4L};
            l_44 |= g_43.f2;
            l_45 = g_37.f1;
        }
        l_48[0][2][1] ^= (1L | (safe_mod_func_uint32_t_u_u(g_4, 0x38DBEC8BL)));
    }
    if ((safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((l_48[0][2][1] | 1L), ((l_56 = (l_53 , (safe_div_func_int64_t_s_s(0xF29ADBE56F6324B7LL, 9UL)))) != l_48[0][2][1]))), l_53.f2)))
    { 
        uint8_t l_57 = 255UL;
        ++l_57;
        g_68[0] ^= ((+(((safe_lshift_func_int8_t_s_u(((((safe_unary_minus_func_int16_t_s(0xB93FL)) & ((safe_rshift_func_int16_t_s_u((-7L), 12)) , ((safe_sub_func_uint64_t_u_u(((g_36[1] | (1L ^ g_43.f2)) , l_48[0][2][1]), g_43.f2)) , 0x95AEL))) , 0x7CC827221BDB030FLL) , (-7L)), 6)) ^ g_3[2][2][0]) >= 1UL)) != p_14);
    }
    else
    { 
        int64_t l_69[4][3][4] = {{{0x354C0A206E71D51ALL,1L,1L,0x354C0A206E71D51ALL},{1L,1L,0x8F345D263D1F0774LL,1L},{1L,0x768641A018BFD1E4LL,0x8F345D263D1F0774LL,0x8F345D263D1F0774LL}},{{1L,1L,1L,0x8F345D263D1F0774LL},{0x354C0A206E71D51ALL,0x768641A018BFD1E4LL,0x354C0A206E71D51ALL,1L},{0x354C0A206E71D51ALL,1L,1L,0x354C0A206E71D51ALL}},{{1L,1L,0x8F345D263D1F0774LL,1L},{1L,0x768641A018BFD1E4LL,0x8F345D263D1F0774LL,0x8F345D263D1F0774LL},{1L,1L,1L,0x8F345D263D1F0774LL}},{{0x354C0A206E71D51ALL,0x768641A018BFD1E4LL,0x354C0A206E71D51ALL,1L},{0x354C0A206E71D51ALL,1L,1L,0x354C0A206E71D51ALL},{1L,1L,0x8F345D263D1F0774LL,1L}}};
        struct S0 l_76 = {0L};
        uint64_t l_132 = 0x64A4A936FBAC331ALL;
        int i, j, k;
        g_70[0] = (0xE29AFBAEL ^ ((l_69[1][2][1] |= p_13) & (g_43.f1 = g_36[1])));
        if ((0xFFB2EF76CAF44556LL != (safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(l_56, p_13)) >= (safe_unary_minus_func_int32_t_s(0x54351128L))), l_69[0][0][1]))))
        { 
            uint8_t l_87 = 0x21L;
            int32_t l_100 = 1L;
            int32_t l_143 = (-1L);
            int32_t l_144 = 0xA9BDD0B6L;
            if (l_69[3][0][1])
            { 
                l_76 = l_76;
            }
            else
            { 
                int64_t l_77 = 0xE99E236B79BA4D29LL;
                l_77 &= 6L;
                g_85 = (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((+p_14) ^ (g_43.f1 = l_48[0][2][1])), (p_13 , ((safe_lshift_func_uint16_t_u_u(0xF29FL, 11)) <= g_68[0])))), l_53.f2));
                l_87++;
            }
            if ((safe_lshift_func_int8_t_s_u(p_14, 1)))
            { 
                g_92 = p_13;
            }
            else
            { 
                int32_t l_95 = 0xA2358462L;
                int32_t l_101 = (-8L);
                l_100 = (safe_div_func_int64_t_s_s((g_85 ^= (l_76.f0 = l_95)), (((g_4 == (((safe_div_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(l_53.f2, (0x766B1C03L > g_43.f0))), l_95)) < p_13) >= g_68[0])) == l_56) , p_14)));
                if (g_43.f2)
                    goto lbl_102;
lbl_102:
                l_101 = l_100;
                g_103[0][0][1] |= 1L;
            }
            if ((~p_13))
            { 
                int64_t l_116 = 0x256DA865B3CABD61LL;
                g_121 ^= (safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(g_37.f0, 5)) | (safe_unary_minus_func_int16_t_s((l_100 ^ (safe_mod_func_int32_t_s_s((((l_116 && (safe_div_func_int16_t_s_s((g_103[0][0][1] = (safe_lshift_func_int16_t_s_u(0xBD6BL, 6))), 65535UL))) && g_36[1]) > (-8L)), p_13)))))), l_100)), l_87)), l_76.f0));
                l_100 = (safe_sub_func_uint64_t_u_u(g_37.f1.f0, g_37.f0));
            }
            else
            { 
                uint32_t l_141 = 0x75416565L;
                uint32_t l_142 = 0x5FA89317L;
                l_144 = (safe_div_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((((l_143 ^= ((safe_div_func_int64_t_s_s(((safe_add_func_uint16_t_u_u((l_132 = p_13), (safe_mul_func_int8_t_s_s(((l_100 = 1L) || (safe_add_func_int64_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(g_121, (g_36[1] >= l_141))), 0x32B9L)), g_103[0][2][0]))), l_141)))) , 0xEAE813F23DC045D8LL), l_142)) >= 0x09CA3844EF14F5BELL)) == l_69[1][2][1]) || 4UL), g_121)), 1UL));
            }
        }
        else
        { 
            uint32_t l_169 = 0UL;
            int32_t l_170 = 0x385C65EBL;
            for (p_13 = 0; (p_13 <= 0); p_13 += 1)
            { 
                uint32_t l_157 = 0x1DEB0A87L;
                int32_t l_159 = (-9L);
                g_145 = g_86;
                g_158[2] |= ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((g_103[0][0][1] = ((((+p_13) & (g_86 != ((18446744073709551615UL < ((safe_sub_func_int32_t_s_s(0x964C9D42L, 0x3CC42B59L)) , 18446744073709551611UL)) != 0x61C211F742CEBDE3LL))) >= l_157) , 0xAA54L)) && 0L), g_68[0])), 9)), 5)) || p_14);
                l_159 |= l_48[0][0][0];
            }
            g_173 = (g_172 = (safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((p_14 && ((safe_add_func_int16_t_s_s((safe_div_func_uint64_t_u_u((+((0xD68BL == g_158[0]) , (((l_170 = ((((0xD5895350L && l_53.f2) < g_37.f1.f0) >= 255UL) > l_169)) <= l_171) && 8L))), g_92)), g_145)) , 0x3E92L)) & 0x37L), p_14)) && g_36[1]), 65531UL)));
            g_176++;
        }
    }
    return l_53;
}



static struct S1  func_15(int32_t  p_16, union U2  p_17, uint32_t  p_18, uint8_t  p_19)
{ 
    union U2 l_35 = {0x4060A3B7DC4B54C5LL};
    p_16 = ((((((safe_lshift_func_int16_t_s_s(1L, ((~(l_35 , 0xB4AB19F8L)) | (g_36[1] |= l_35.f0)))) | 1L) && p_18) , p_17.f1) && (-7L)) > l_35.f0);
    return g_37;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_36[i], "g_36[i]", print_hash_value);

    }
    transparent_crc(g_37.f0, "g_37.f0", print_hash_value);
    transparent_crc(g_37.f1.f0, "g_37.f1.f0", print_hash_value);
    transparent_crc(g_37.f2, "g_37.f2", print_hash_value);
    transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
    transparent_crc(g_43.f2, "g_43.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_68[i], "g_68[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_70[i], "g_70[i]", print_hash_value);

    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_103[i][j][k], "g_103[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_158[i], "g_158[i]", print_hash_value);

    }
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_183[i][j], "g_183[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
