// SPDX-License-Identifier: MIT
// cctest_csmith_e4b24ba4.c --- cctest case csmith_e4b24ba4 (csmith seed 3836890020)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd39683bc */

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

// Options:   -s 3836890020 -o /tmp/csmith_gen_uub2i_45/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


union U1 {
   const int32_t  f0;
};

union U2 {
   uint16_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   int16_t  f1;
   int64_t  f2;
   const uint16_t  f3;
   uint16_t  f4;
};
#pragma pack(pop)

union U3 {
   struct S0  f0;
   const int16_t  f1;
};


static uint32_t g_7 = 4294967288UL;
static int64_t g_35[2][1] = {{0x82BC90638325423BLL},{0x82BC90638325423BLL}};
static uint16_t g_58 = 0xCB52L;
static uint32_t g_62 = 0x041F5FBDL;
static union U3 g_71 = {{0x30L,-1L,-1L,0x4680L,0UL}};
static union U2 g_72[2][3] = {{{6UL},{6UL},{6UL}},{{6UL},{6UL},{6UL}}};
static union U2 g_73 = {1UL};
static int16_t g_78 = 1L;
static uint32_t g_79 = 0x90A06BCAL;
static uint64_t g_115 = 4UL;
static int8_t g_127 = 0xDEL;
static int8_t g_133 = 0x06L;
static uint8_t g_136 = 0UL;
static int8_t g_147 = 0xD4L;



static int16_t  func_1(void);
static uint64_t  func_8(union U2  p_9, union U2  p_10, uint8_t  p_11, int16_t  p_12);
static union U2  func_13(int32_t  p_14, uint32_t  p_15, int8_t  p_16, union U3  p_17);
static uint32_t  func_19(const uint8_t  p_20, union U1  p_21, union U1  p_22, int8_t  p_23);




static int16_t  func_1(void)
{ 
    uint32_t l_4[5][1][1];
    union U3 l_18 = {{255UL,0x0980L,0xB959C45C1D102278LL,0UL,1UL}};
    int32_t l_75 = 0xCFD11E6AL;
    int8_t l_126 = 0xD9L;
    const int8_t l_129 = 0L;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_4[i][j][k] = 4294967287UL;
        }
    }
    g_7 = (safe_add_func_uint32_t_u_u((--l_4[1][0][0]), (-4L)));
    if ((l_75 = (func_8((g_72[0][0] = func_13(g_7, (l_4[3][0][0] >= g_7), l_4[2][0][0], l_18)), g_73, g_71.f0.f1, l_18.f0.f2) < 0x4E1B820FDEBFC8A3LL)))
    { 
        int16_t l_80[5] = {0L,0L,0L,0L,0L};
        int32_t l_94 = 0x87359431L;
        const uint64_t l_132 = 0x21008EF7495786F5LL;
        int i;
        g_78 |= (1L > (g_73.f0 > ((((safe_mod_func_uint16_t_u_u(l_4[1][0][0], 0xCB41L)) != 0x044A2B86846FFD3CLL) , l_18.f0.f0) & g_71.f1)));
        l_80[2] = (g_79 = g_71.f0.f2);
        if (l_18.f0.f2)
        { 
            return l_80[2];
        }
        else
        { 
            int16_t l_90 = 6L;
            int32_t l_93[2];
            int i;
            for (i = 0; i < 2; i++)
                l_93[i] = 0x59668C86L;
            if (((l_18.f0.f3 >= ((g_71.f0.f1 || (safe_rshift_func_uint16_t_u_u((((g_71 , (safe_div_func_uint8_t_u_u((!(((safe_rshift_func_int8_t_s_u(l_4[1][0][0], 1)) <= g_71.f0.f3) == 0L)), g_78))) & l_18.f0.f4) < l_80[2]), l_90))) && 2UL)) >= 0xA1D5L))
            { 
                int64_t l_114 = 1L;
                g_115 &= ((safe_rshift_func_uint16_t_u_s((++g_72[0][0].f0), 15)) | (g_71.f0.f3 & ((((safe_mul_func_int8_t_s_s((!((((safe_mul_func_int16_t_s_s(l_75, (safe_mul_func_uint16_t_u_u((l_93[0] ^= (safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(1L, (safe_sub_func_uint64_t_u_u(((l_4[1][0][0] >= g_71.f0.f3) || 0x6818A95D68046A17LL), l_80[1])))), g_71.f0.f4)), 1UL)) || g_62), 0x5E2BE98DL))), l_4[4][0][0])))) || g_71.f0.f0) && l_94) != l_114)), l_18.f0.f1)) & g_35[1][0]) <= l_18.f0.f3) >= 0x496E341DA9CD7CB0LL)));
                g_127 = ((safe_add_func_uint32_t_u_u(((g_71 , ((g_71.f0.f0 = (safe_lshift_func_int8_t_s_u((l_114 != (safe_div_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((g_115 & (safe_mul_func_uint8_t_u_u(g_71.f0.f3, l_114))), l_126)) >= 3UL), g_71.f0.f2))), g_62))) != 2UL)) != (-7L)), g_73.f0)) > l_94);
                g_133 &= (((safe_unary_minus_func_int8_t_s((l_129 & (((255UL != (safe_mod_func_int32_t_s_s((g_79 , (g_71.f0.f2 <= l_94)), g_71.f0.f3))) <= l_80[2]) | l_90)))) > l_132) | l_18.f0.f3);
            }
            else
            { 
                g_136 = (safe_rshift_func_int8_t_s_u(0x1AL, l_94));
            }
        }
    }
    else
    { 
        union U2 l_141[5] = {{0UL},{0UL},{0UL},{0UL},{0UL}};
        int32_t l_146 = 1L;
        int i;
        g_147 = (safe_rshift_func_int16_t_s_u((+((+l_126) && (l_141[3] , (0xF0L == ((((safe_rshift_func_uint8_t_u_u(((l_146 ^= (safe_mul_func_int16_t_s_s(g_72[0][0].f0, 0x2E77L))) >= l_18.f0.f2), l_129)) , g_73) , (-10L)) || 0x6E09L))))), 14));
    }
    l_75 = l_18.f0.f0;
    return g_147;
}



static uint64_t  func_8(union U2  p_9, union U2  p_10, uint8_t  p_11, int16_t  p_12)
{ 
    uint32_t l_74 = 4294967295UL;
    l_74 &= ((g_58 , p_10.f0) | 0x00L);
    return l_74;
}



static union U2  func_13(int32_t  p_14, uint32_t  p_15, int8_t  p_16, union U3  p_17)
{ 
    int32_t l_24 = 0x5AF9F7C8L;
    union U1 l_29 = {0x7FD074DEL};
    int32_t l_34 = 0xB51FD9ABL;
    union U2 l_61[2][3][1] = {{{{65535UL}},{{0x0DB5L}},{{65535UL}}},{{{0x0DB5L}},{{65535UL}},{{0x0DB5L}}}};
    int i, j, k;
    if ((func_19((((l_24 , 8L) || (p_17.f0.f4 = (g_7 && ((((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((p_16 == l_24), 14)) == l_24), 0L)) ^ p_14) == l_24) >= l_24)))) , 0x04L), l_29, l_29, l_24) , 4L))
    { 
        for (p_15 = 2; (p_15 == 26); p_15++)
        { 
            l_34 ^= 0xAE89405DL;
        }
    }
    else
    { 
        for (p_17.f0.f2 = 0; p_17.f0.f2 < 2; p_17.f0.f2 += 1)
        {
            for (l_24 = 0; l_24 < 1; l_24 += 1)
            {
                g_35[p_17.f0.f2][l_24] = 0xB91359A7032F1EFALL;
            }
        }
    }
    for (p_17.f0.f0 = (-21); (p_17.f0.f0 >= 44); ++p_17.f0.f0)
    { 
        int16_t l_46 = (-1L);
        union U1 l_49[3][1][3] = {{{{0x7C9A7B2EL},{0x7C9A7B2EL},{0x7C9A7B2EL}}},{{{0x7C9A7B2EL},{0x7C9A7B2EL},{0x7C9A7B2EL}}},{{{0x7C9A7B2EL},{0x7C9A7B2EL},{0x7C9A7B2EL}}}};
        int32_t l_57 = 0x09C591EBL;
        int i, j, k;
        if (((-1L) & ((safe_add_func_int16_t_s_s(0x7BA2L, (safe_mul_func_int16_t_s_s(((0xE0L <= (((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(g_7, l_46)), p_17.f0.f3)) <= 0x40L) < 18446744073709551613UL)) && 0xFF7828E9L), l_46)))) | 0x2F1036C1418E8DCELL)))
        { 
            uint64_t l_47 = 18446744073709551607UL;
            int32_t l_48 = 1L;
            l_48 &= l_47;
            p_14 = (l_46 | (l_24 & (l_34 = l_46)));
        }
        else
        { 
            const uint32_t l_56[5] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
            int i;
            if ((l_49[2][0][1] , (l_49[2][0][1].f0 <= (safe_add_func_int8_t_s_s((p_17.f0.f3 <= (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((l_56[0] && 1UL), g_7)), p_14))), p_15)))))
            { 
                ++g_58;
                l_34 &= g_58;
            }
            else
            { 
                return l_61[1][0][0];
            }
        }
        if (g_35[1][0])
            break;
        --g_62;
    }
    p_14 = ((g_35[0][0] & (safe_lshift_func_int16_t_s_s((+p_17.f0.f2), (+(safe_rshift_func_int16_t_s_u(((g_71 , (g_7 | 0x2CL)) ^ 0x8196E547EF217EDELL), l_34)))))) <= g_71.f0.f1);
    return l_61[1][2][0];
}



static uint32_t  func_19(const uint8_t  p_20, union U1  p_21, union U1  p_22, int8_t  p_23)
{ 
    for (g_7 = 21; (g_7 <= 1); --g_7)
    { 
        if (p_23)
            break;
    }
    return g_7;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_35[i][j], "g_35[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_71.f0.f0, "g_71.f0.f0", print_hash_value);
    transparent_crc(g_71.f0.f1, "g_71.f0.f1", print_hash_value);
    transparent_crc(g_71.f0.f2, "g_71.f0.f2", print_hash_value);
    transparent_crc(g_71.f0.f3, "g_71.f0.f3", print_hash_value);
    transparent_crc(g_71.f0.f4, "g_71.f0.f4", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_72[i][j].f0, "g_72[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
